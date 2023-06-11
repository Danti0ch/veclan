#include <stdio.h>
#include "logger.h"
#include "text_storage.h"
#include <string.h>
#include "lex_graph.h"
#include "rec_descent.h"
#include "parser.h"
#include <ctype.h>
#include "stack.h"
#include <stdarg.h>

// TODO: создания string для буфера(невозможно расчитать размер, потребуется увеличивать)
// TODO: fix $ in string
// TODO: macroses add
// TODO: сделать элементы lexer_data глобальными

const size_t INIT_OUTPUT_FILE_SIZE = 512;

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

/**
 * @brief инициализируем все структуры хранения данных, заполняем массив тегов, нфа графов
 */
lexer_data* init_lexer_data(const char* file_name);
static void remove_lexer_data(lexer_data* obj);

static string* generate_dest_file_name(const char* file_name, const char* fold_name);

void generate_obj_file(const string* output_text, const char* output_folder_name, const char* output_file_name);

// SPECIAL_MARK get_mark(word* obj);

void fill_lexer_data(string* buffer, lexer_data* lex_data);

void fill_output_file(lexer_data* lex_data, string* output_text);

void create_tags_file(lexer_data* lex_data, const char* output_folder_name, const char* output_file_name);

inline int isspace(char symb){

    if(symb == ' ' || symb == '\t' || symb == '\n' || symb == 0) return 1;
    return 0;
}
//----------------------------------------------------------------------------------------//

inline string* generate_state_label(const uint n_state){

    return StringCtor("L%u", n_state);
}
//----------------------------------------------------------------------------------------//

char* skip_word(char* buf_pos, const char* buf_pos_limit);
char* skip_spaces(char* buf_pos, const char* buf_pos_limit);

// TODO: transform to general file
void execute_term_cmd(char const * cmd_str, ...);

static lex_graph* generateDFA(const lexer_data* storage);

void dump_lexer_data(lexer_data* lex_data) {

    MDLOG(  "LEXER(%p) DUMP\n"
            "n_nfas: %d\n"
            "n_tags: %d", lex_data, VectorSize(lex_data->nfas), VectorSize(lex_data->tags));

    MDLOG( "tags{");

    for(uint n_tag = 0; n_tag < VectorSize(lex_data->tags); n_tag++) {
        MDLOG("%d) %s", n_tag, (*((string**)VectorGet(lex_data->tags, n_tag)))->data);
    }

    MDLOG("}");

    MDLOG("nfas are printed as images\n");

    for(uint n_graph = 0; n_graph < VectorSize(lex_data->nfas); n_graph++) {

        // string* graph_name = StringCtor("dumped_nfa(%d)", n_graph);
        
        // printf("%s\n", graph_name->data);
        //TextDumpLexGraph(*((lex_graph**)VectorGet(lex_data->nfas, n_graph)));
        // StringDtor(graph_name);
    }

    return;
}

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

void AssembleLexer(const char* input_file_name, const char* output_folder_name, const char* output_file_name){

    NASSERT(input_file_name);
    NASSERT(output_file_name);

    lexer_data* lex_data = init_lexer_data(input_file_name);
    
    dump_lexer_data(lex_data);

    string* output_text  = StringCtor(INIT_OUTPUT_FILE_SIZE);

    fill_output_file(lex_data, output_text);

    create_tags_file(lex_data, output_folder_name, "qute_lexer.h");

    generate_obj_file(output_text, output_folder_name, output_file_name);

    remove_lexer_data(lex_data);
    
    StringDtor(output_text);

    return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//
// TODO: подумать, может стоить получать данные только когда была задетектирована метка body

lexer_data* init_lexer_data(const char* file_name){
    NASSERT(file_name);

    lexer_data* lex_data = (lexer_data*)calloc(1, sizeof(lexer_data));

    string* buffer = GenerateBuffer(file_name);
    lex_data->nfas   = VectorNew(0, sizeof(lex_graph*));
    lex_data->tags   = VectorNew(0, sizeof(string*));
    lex_data->subtags = VectorNew(0, sizeof(string*));
    fill_lexer_data(buffer, lex_data);

    StringDtor(buffer);
    return lex_data;
}
//----------------------------------------------------------------------------------------//

void generate_obj_file(const string* output_text, const char* output_folder_name, const char* output_file_name){

    NASSERT(output_text);
    NASSERT(output_file_name);

    string* output_file_name_full = generate_dest_file_name(output_file_name, output_folder_name);
    string* cpp_file_name = StringCtor();
    StringPush(cpp_file_name, output_file_name_full);
    StringPush(cpp_file_name, ".cpp");

    FILE* output_file = fopen(cpp_file_name->data, "w");

    if(ISNULL(output_file)){
        EDLOG(OWN, "unable to create file %s", output_file_name_full);
    }
    
    size_t n_written_symbs = fwrite(output_text->data, sizeof(char), output_text->size, output_file);
    
    if(n_written_symbs != output_text->size){
        EDLOG(OWN, "failed attempt to write data in file %s", output_file_name_full);
    }
    fclose(output_file);

    string* obj_file_name = StringCtor();
    StringPush(obj_file_name, output_file_name_full);
    StringPush(obj_file_name, ".o");

    execute_term_cmd("g++ -c %s -o %s", cpp_file_name->data, obj_file_name->data);

    StringDtor(cpp_file_name);
    StringDtor(output_file_name_full);
    StringDtor(obj_file_name);
    return;
}
//----------------------------------------------------------------------------------------//

void create_tags_file(lexer_data* lex_data, const char* output_folder_name, const char* output_file_name) {
    
    string* output_text = StringCtor();

    StringPushArgs(output_text, "#pragma once\n\n"
                            "enum class LEXER_RET_CODE{\n"
                            "%s, %s\n"
                            "};\n\n"
                            "LEXER_RET_CODE parse_lexem(char* buff, unsigned int* offset, unsigned long long int* data, unsigned long long int* subdata);\n\n"
                            "enum class LEXER_TAGS{\n", OK_RET_CODE_NAME, FAILED_PARSING_RET_CODE_NAME);

    for(uint n_tag = 0; n_tag < VectorSize(lex_data->tags); n_tag++) {
        string* cur_tag = *((string**)VectorGet(lex_data->tags, n_tag));

        StringPushArgs(output_text, "l_%s,\n", cur_tag->data);
    }

    StringPush(output_text, "};\n\n");

    StringPush(output_text, "enum class LEXER_SUBTAGS{\n");

    for(uint n_tag = 0; n_tag < VectorSize(lex_data->subtags); n_tag++) {
        string* cur_tag = *((string**)VectorGet(lex_data->subtags, n_tag));

        StringPushArgs(output_text, "l_%s,\n", cur_tag->data);
    }

    StringPush(output_text, "};\n");

    // string* cpp_file_name = StringCtor(output_file_name, strlen(output_file_name));
    // StringPush(cpp_file_name, ".h");

    string* output_name = generate_dest_file_name(output_file_name, output_folder_name);
    FILE* output_file = fopen(output_name->data, "w");

    if(ISNULL(output_file)){
        EDLOG(OWN, "unable to create file %s", output_file_name);
    }
    // StringDtor(cpp_file_name);
    
    size_t n_written_symbs = fwrite(output_text->data, sizeof(char), output_text->size, output_file);

    if(n_written_symbs != output_text->size){
        EDLOG(OWN, "failed attempt to write data in file %s", output_file_name);
    }
    fclose(output_file);

    StringDtor(output_text);
    StringDtor(output_name);

    return;
}
//----------------------------------------------------------------------------------------//

void add_tag_to_stack(stack_t* stack, const char* name) {

    size_t len = strlen(name);
    char* name_to_contain = (char*)calloc(len, sizeof(char));
    strncpy(name_to_contain, name, len);

    StackPush(stack, name_to_contain);

    free(name_to_contain);
}

void remove_tag_from_stack(stack_t* stack) {
    free(StackTop(stack));
    StackPop(stack);
}

uint add_tag_code(lexer_data* lex_data, const char* buff) {

    // TODO: to optimize

    for(uint n_tag = 0; n_tag < VectorSize(lex_data->tags); n_tag++) {

        string* cur_tag = *((string**)VectorGet(lex_data->tags, n_tag));
        if(strncmp(buff, cur_tag->data, cur_tag->size) == 0){
            EDLOG(ERROR_CODE::OWN, "duplicated tag: %s", cur_tag->data);
            //return n_tag;
        }
    }
    // todo: refactor
    uint len = 0;

    while(!isspace(buff[len]) && buff[len] != '{') len++;

    string* new_tag = StringCtor(buff, len);
    VectorPush(lex_data->tags, &new_tag);

    return VectorSize(lex_data->tags) - 1;
}

// todo: remove copypaste
uint add_subtag_code(lexer_data* lex_data, const char* buff) {

    // TODO: to optimize

    for(uint n_tag = 0; n_tag < VectorSize(lex_data->subtags); n_tag++) {

        string* cur_tag = *((string**)VectorGet(lex_data->subtags, n_tag));
        if(strncmp(buff, cur_tag->data, cur_tag->size) == 0){
            EDLOG(ERROR_CODE::OWN, "duplicated tag: %s", cur_tag->data);
            //return n_tag;
        }
    }
    // todo: refactor
    uint len = 0;

    while(!isspace(buff[len]) && buff[len] != '{') len++;

    string* new_tag = StringCtor(buff, len);
    VectorPush(lex_data->subtags, &new_tag);

    return VectorSize(lex_data->subtags) - 1;
}

uint get_RE_len(const char* buff, const char* limit) {

    uint len = 0;
    buff++;

    while(buff + len + 1 < limit && buff[len] != '\"') {
        if(buff[len] == '\\' && buff[len + 1] == '\"')
            len += 2;
        else
            len += 1;
    }

    if(buff + len < limit && buff[len] != '\"')
        EDLOG(ERROR_CODE::OWN, "RE has inavalid structure");
    if(buff + len >= limit)
        EDLOG(ERROR_CODE::OWN, "RE has inavalid structure");

    return len;
}

// #define SEND_ERROR EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u token definition", n_cur_token);
#define SKIP_SYMB(symb) \
{                        \
    if(*buff != symb){     \
        EDLOG(OWN, "WRONG GRAMATIC FOUND ON %d token", tag_code); \
    }   \
    buff++;                                                \
    buff = skip_spaces(buff, limit);                \
}

void fill_lexer_data(string* buffer, lexer_data* lex_data){

    NASSERT(lex_data);

    //stack_t* stack = StackConstructor(1, sizeof(char*));

    char* buff = buffer->data;
    const char* limit = buff + buffer->size;

    while(buff < limit){
        assert(isalpha(*buff));

        //add_tag_to_stack(stack, buff);
        uint tag_code = add_tag_code(lex_data, buff);
        buff = skip_word(buff, limit);
        
        vector* acc_state_data = VectorNew(1, sizeof(tag_code));
        VectorPush(acc_state_data, &tag_code);
        
        SKIP_SYMB('{')

        // if(*buff != '\"') continue;

        lex_graph* cur_nfa = NULL;
        while(*buff != '}') {
            
            if(*buff == '\"'){
                uint RE_len = get_RE_len(buff, limit);
                buff++;

                lex_graph* nfa = ConvertTreeToNFA(CreateAST(buff, RE_len), VectorGenerateDuplicate(acc_state_data));

                MergeGraphsParallel(nfa, cur_nfa);
                cur_nfa = nfa;

                buff += RE_len + 1;
                buff = skip_spaces(buff, limit);
            }
            else {
                assert(isalpha(*buff));

                uint subtag_code = add_subtag_code(lex_data, buff);
                buff = skip_word(buff, limit);

                SKIP_SYMB('{')
                while(*buff != '}') {
                    uint RE_len = get_RE_len(buff, limit);
                    buff++;

                    VectorPush(acc_state_data, &subtag_code);

                    lex_graph* nfa = ConvertTreeToNFA(CreateAST(buff, RE_len), VectorGenerateDuplicate(acc_state_data));
                    VectorPop(acc_state_data, &subtag_code);

                    MergeGraphsParallel(nfa, cur_nfa);
                    cur_nfa = nfa;

                    buff += RE_len + 1;
                    buff = skip_spaces(buff, limit);
                }
                SKIP_SYMB('}')
            }
        }

        assert(cur_nfa);
        VectorPush(lex_data->nfas, &cur_nfa);
        
        SKIP_SYMB('}')
    }

    return;
}

#undef SKIP_SYMB
//----------------------------------------------------------------------------------------//

char* skip_word(char* buf_pos, const char* buf_pos_limit){

    NASSERT(buf_pos);
    NASSERT(buf_pos_limit);

    while(buf_pos < buf_pos_limit && !isspace(*buf_pos)){
        buf_pos++;
    }

    if(buf_pos >= buf_pos_limit) return NULL;

    while(buf_pos < buf_pos_limit && isspace(*buf_pos)){
        buf_pos++;
    }

    if(buf_pos >= buf_pos_limit) return NULL;

    return buf_pos;
}
//----------------------------------------------------------------------------------------//

char* skip_spaces(char* buf_pos, const char* buf_pos_limit){

    NASSERT(buf_pos);
    NASSERT(buf_pos_limit);

    while(buf_pos < buf_pos_limit && isspace(*buf_pos)){
        buf_pos++;
    }

    return buf_pos;
}
//----------------------------------------------------------------------------------------//

void execute_term_cmd(char const * cmd_str, ...){

	assert(cmd_str != NULL);

	va_list args;
    va_start(args, cmd_str);

	// fix
    int buflen   = 500;//_vscprintf(cmd_str, args) + 1;
    char *buffer = (char*)calloc(buflen, sizeof(char));

    if (buffer != NULL){
        vsprintf(buffer, cmd_str, args);
    }

    va_end( args );

    system(buffer);

	free(buffer);
	return;
}
//----------------------------------------------------------------------------------------//

void fill_state(lex_graph* dfa, string* output_text, vector* visited_dfa_states, uint n_state){

    int tmp = 1;
    VectorSet(visited_dfa_states, n_state, &tmp);

    state* cur_state = (state*)VectorGet(dfa->states, n_state);

    if(VectorSize(cur_state->conns) == 0) {
        
        if(VecsetFind(dfa->accept_states, n_state + 1)) {
            uint cur_state = -1;
            //!
            for(uint i = 0; i < VecsetSize(dfa->accept_states); i++) {
                if(VecsetGet(dfa->accept_states, i) == n_state + 1) {
                    cur_state = i;
                }
            }
            vector* accept_state_data = (vector*)VectorGet(dfa->accept_states_meta_data, cur_state);
            
            uint data = *(uint*)VectorGet(accept_state_data, 0);

            if(VectorSize(accept_state_data) == 1) {
                StringPushArgs(output_text, "state%d:\n"
                                            "*offset = loc_offset;\n"
                                            "*data = %u;\n"
                                            "*subdata = %u;\n"
                                            "return %s;\n", n_state, data, OK_RET_CODE_NAME);            
            }
            else if(VectorSize(accept_state_data) == 2) {
                uint subdata = *(uint*)VectorGet(accept_state_data, 1);
                StringPushArgs(output_text, "state%d:\n"
                                            "*offset = loc_offset;\n"
                                            "*data = %u;\n"
                                            "*subdata = %u;\n"
                                            "return LEXER_RET_CODE::%s;\n", n_state, data, subdata, OK_RET_CODE_NAME);
            }
        }
        else {
            EDLOG(ERROR_CODE::OWN, "Found non-accept state with 0 conns");
            // StringPush(output_text, "state%d:\n"
            //                         "return -1;\n", n_state);
        }
        
        return;
    }

    StringPushArgs(output_text, 
                            "state%d:\n"
                            "switch(%s[loc_offset++]){\n", n_state, PARSING_BUFF_VAR_NAME);

    for(uint n_conn = 0; n_conn < VectorSize(cur_state->conns); n_conn++){
        conn* cur_conn = (conn*)VectorGet(cur_state->conns, n_conn);

        if(*(int*)VectorGet(visited_dfa_states, cur_conn->next_state - 1)){
            StringPushArgs(output_text, 
                                    "case '%c':\n"
                                    "{\n"
                                    "goto state%u;\n"
                                    "break;\n"
                                    "}\n", cur_conn->symb, cur_conn->next_state - 1);
        }
        else {
            StringPushArgs(output_text, 
                                    "case '%c':\n"
                                    "{\n", cur_conn->symb);
            fill_state(dfa, output_text, visited_dfa_states, cur_conn->next_state - 1);
            StringPush(output_text, 
                                    "break;\n"
                                    "}\n");
        }
    }

    // todo: update

    if(VecsetFind(dfa->accept_states, n_state + 1)) {
        
        uint cur_state = -1;
        //!
        for(uint i = 0; i < VecsetSize(dfa->accept_states); i++) {
            if(VecsetGet(dfa->accept_states, i) == n_state + 1) {
                cur_state = i;
            }
        }
        //!
        // todo:
        vector* accept_state_data = (vector*)VectorGet(dfa->accept_states_meta_data, cur_state);
        uint data = *(uint*)VectorGet(accept_state_data, 0);

        if(VectorSize(accept_state_data) == 1) {
            StringPushArgs(output_text, "default: { \n"
                                        "*offset = loc_offset - 1;\n"
                                        "*data = %u;\n"
                                        "return LEXER_RET_CODE::%s;\n"
                                        "}\n"
                                        "}\n", data, OK_RET_CODE_NAME);      
        }

        else if(VectorSize(accept_state_data) == 2) {
            uint subdata = *(uint*)VectorGet(accept_state_data, 1);

            StringPushArgs(output_text, "default: { \n"
                                        "*offset = loc_offset - 1;\n"
                                        "*data = %u;\n"
                                        "*subdata = %u;\n"
                                        "return LEXER_RET_CODE::%s;\n"
                                        "}\n"
                                        "}\n", data, subdata, OK_RET_CODE_NAME);
        }
    }
    else{
        StringPushArgs(output_text, "default: { return LEXER_RET_CODE::%s; }\n}\n", FAILED_PARSING_RET_CODE_NAME); 
    }
 
    return;
}

void fill_output_file(lexer_data* lex_data, string* output_text) {

    NASSERT(lex_data); NASSERT(output_text);
    
    for(int n_graph = VectorSize(lex_data->nfas) - 1; n_graph > 0; n_graph--) {
        MergeGraphsParallel(*((lex_graph**)VectorGet(lex_data->nfas, n_graph - 1)), *((lex_graph**)VectorGet(lex_data->nfas, n_graph)));
    }
    
    lex_graph* dfa = ConvertNFAtoDFA(*((lex_graph**)VectorGet(lex_data->nfas, 0)));
    
    vector* visited_dfa_states = VectorNew(VectorSize(dfa->states), sizeof(int));
    for(int i = 0; i < VectorSize(dfa->states); i++) {
        int tmp = 0;
        VectorPush(visited_dfa_states, &tmp);
    }

    StringPush(output_text,
                            "#include \"qute_lexer.h\"\n\n"
                            "LEXER_RET_CODE parse_lexem(char* buff, unsigned int* offset, unsigned long long int* data, unsigned long long int* subdata) {\n"
                            "unsigned int loc_offset = 0;\n");

    fill_state(dfa, output_text, visited_dfa_states, dfa->start_state - 1);
    StringPushArgs(output_text, "return LEXER_RET_CODE::%s;\n}\n", FAILED_PARSING_RET_CODE_NAME);

    return;
}
//----------------------------- -----------------------------------------------------------//

static void remove_lexer_data(lexer_data* obj) {

    for(uint n_nfa = 0; n_nfa < VectorSize(obj->nfas); n_nfa++) {
        LexGraphRemove(*((lex_graph**)VectorGet(obj->nfas, n_nfa)));
    }

    for(uint n_tag = 0; n_tag < VectorSize(obj->tags); n_tag++) {
        StringDtor(*((string**)VectorGet(obj->tags, n_tag)));
    }
    
    VectorDelete(obj->nfas);
    VectorDelete(obj->tags);

    free(obj);
    return;
}

static string* generate_dest_file_name(const char* file_name, const char* fold_name) {
    char output_name[128] = "";
    strcpy(output_name, fold_name);
    strcat(output_name, "/");
    strcat(output_name, file_name);

    return StringCtor(output_name, strlen(output_name));
}
