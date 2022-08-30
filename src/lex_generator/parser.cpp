#include <stdio.h>
#include "logger.h"
#include "text_storage.h"
#include <string.h>
#include "lex_graph.h"
#include "rec_descent.h"

// TODO: создания string для буфера(невозможно расчитать размер, потребуется увеличивать)
// TODO: fix $ in string
// TODO: macroses add
// TODO: сделать элементы lexer_data глобальными

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

/**
 * @brief инициализируем все структуры хранения данных
 */
lexer_data* init_lexer_data(const char* file_name);
static void remove_lexer_data(lexer_data* obj);

void generate_obj_file(const string* output_text, const char* output_file_name);

SPECIAL_MARK get_mark(word* obj);

void get_tokens_data(lexer_data* storage);

string* get_marked_text(lexer_data* storage, char* p_buf, const char symb_marker, uint* len);

void table_parse_symb_require(const char* p_buf, const char symb, const uint n_table);
void token_parse_symb_require(const char* p_buf, const char symb, const uint n_token);

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

static void insert_tables_data(const lexer_data* storage, string* output_text);
static void insert_state_in_body(const lexer_data* storage, string* output_text, const lex_graph* DFA, const uint n_state);

static lex_graph* generateDFA(const lexer_data* storage);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

void AssembleLexer(const char* input_file_name, const char* output_file_name){

    NASSERT(input_file_name);
    NASSERT(output_file_name);

    lexer_data* lex_data = init_lexer_data(input_file_name);
    string* output_text  = StringCtor(lex_data->text_data->len_buf);

    insert_tables_data(lex_data, ouput_text);
    
    StringPush(output_text, lex_data->text_before_body);

    insert_lexer_body(lex_data, output_text);
    
    StringPush(output_text, lex_data->text_after_body);

    generate_obj_file(output_text, output_file_name);

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

    lexer_data* data_storage = (lexer_data*)calloc(1, sizeof(lexer_data));

    data_storage->text_data = GetStorage(file_name);
    data_storage->text_buffer  = GetBuffer(file_name);

    data_storage->tokens.size  = 0;
    data_storage->name_tables.size = 0;

    data_storage->tokens.pos  = VectorNew(1, sizeof(uint));
    data_storage->name_tables.pos = VectorNew(1, sizeof(uint));

    uint n_words = GetNWords(data_storage->text_data);

    uint end_required = 0;

    data_storage->name_tables.data = VectorNew(data_storage->name_tables.size);
    CHECKALLOC(data_storage->name_tables.data);

    data_storage->tokens.data = VectorNew(data_storage->tokens.size);
    CHECKALLOC(data_storage->tokens.data);

    data_storage->text_before_body = StringCtor();
    data_storage->text_after_body  = StringCtor();

    for(uint n_word = 0; n_word < n_words; n_word++){
        word* cur_word = GetWord(data_storage->text_data, n_word);

        if(cur_word->pt[0] == '$'){
            SPECIAL_MARK cur_mark = get_mark(cur_word);

            if(cur_mark == SPECIAL_MARK::TOKEN && !end_required){
                get_token_data(data_storage, n_word);
            }
            else if(cur_mark == SPECIAL_MARK::NAME_TABLE && !end_required){
                get_table_data(data_storage, n_word);
            }
            else if(cur_mark == SPECIAL_MARK::BODY && !end_required){
                data_storage->body_mark_found = 1;
            }
            else if(cur_mark == SPECIAL_MARK::END && !end_required){
                end_required = 0;
            }
            else if(data_storage->body_mark_found){
                StringPush(data_storage->text_after_body, cur_word->pt, cur_word->len);
                StringPush(data_storage->text_after_body, " ");
            }
            else{
                StringPush(data_storage->text_before_body, cur_word->pt, cur_word->len);
                StringPush(data_storage->text_before_body, " ");
            }
        }
        else{
            if(data_storage->body_mark_found){
                StringPush(data_storage->text_after_body, cur_word->pt, cur_word->len);
                StringPush(data_storage->text_after_body, " ");
            }
            else{
                StringPush(data_storage->text_before_body, cur_word->pt, cur_word->len);
                StringPush(data_storage->text_before_body, " ");                
            }
        }
    }

    if(!data_storage->body_mark_found){
        if(VectorSize(data_storage->tokens_storage) != 0){
            EDLOG(OWN, "BODY MARK NOT FOUND, BUT TOKEN DEFINITIONS ARE FOUND");
        }
        DLOG(INFO, "BODY MARK NOT FOUND");
    }
    if(VectorSize(data_storage->tokens_storage) == 0){
        DLOG(INFO, "TOKEN DEFINITIONS NOT FOUND");
    }

    if(VectorSize(data_storage->tables_storage)){
        DLOG(INFO, "TABLES DEFINITIONS NOT FOUND");
    }

    return data_storage;
}
//----------------------------------------------------------------------------------------//

void generate_obj_file(const string* output_text, const char* output_file_name){

    NASSERT(output_text);
    NASSERT(output_file_name);
    
    string* cpp_file_name = StringCtor(output_file_name, strlen(output_file_name));
    StringPush(cpp_file_name, cpp_extens_string);

    FILE* output_file = fopen(cpp_file_name, "w");

    if(ISNULL(output_file)){
        EDLOG(OWN, "unable to create file %s", output_file_name);
    }
    StringDtor(cpp_file_name);
    
    size_t n_written_symbs = fwrite(output_text->data, output_text->size, sizeof(char), output_file);
    
    if(n_written_symbs != output_text->size){
        EDLOG(OWN, "failed attempt to write data in file %s", output_file_name);
    }
    fclose(output_file);

    execute_term_cmd("g++ -c %s", cpp_file_name);

    StringDtor(cpp_file_name);
    
    return;
}
//----------------------------------------------------------------------------------------//

// TODO: RELOCATE MARK INFO

SPECIAL_MARK get_mark(word* obj){

    NASSERT(obj);

    if(strcmp(obj->pt, "$BODY$")){
        return SPECIAL_MARK::BODY;
    }
    else if(strcmp(obj->pt, "$TOKEN$")){
        return SPECIAL_MARK::TOKEN;
    }
    else if(strcmp(obj->pt, "$NAME_TABLE$")){
        return SPECIAL_MARK::NAME_TABLE;
    }
    else if(strcmp(obj->pt, "$TABLES_INSERT$")){
        return SPECIAL_MARK::TABLES_INSERT;
    }
    else if(strcmp(obj->pt, "$END$")){
        return SPECIAL_MARK::END;
    }
    else{
        return SPECIAL_MARK::UNKNOWN;
    }
}
//----------------------------------------------------------------------------------------//

// TODO: обработка \" в кодах и в РВ
// TODO: посимвольное считывание в буфер

// TODO: refactor
// TODO: add macroses

#define SEND_ERROR EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u token definition", n_cur_token);
#define SKIP_SYMB(symb)                                     \\
{                                                            \\
    token_parse_symb_require(p_buf, (symb), n_cur_token);        \\
    p_buf++;                                                   \\
    p_buf = skip_spaces(p_buf, p_buf_limit);                    \\
}

void get_token_data(lexer_data* storage, const uint n_word){

    NASSERT(storage);
    n_word++;

    char*       p_buf       = GetWordText(storage->text_data, n_word);
    const char* p_buf_limit = storage->text_data->buffer + GetStorageBufSize(storage->text_data);

    while(!strcmp(p_buf, "$END$")){

        uint n_cur_token = VectorSize(storage->tokens_storage) + 1;
        p_buf            = skip_word(p_buf, p_buf_limit);
        SKIP_SYMB('=')

        uint    marked_text_len = 0;

        string* RE              = get_marked_text(storage, p_buf, '\"', &marked_text_len);
        if(ISNULL(RE)) SEND_ERROR

        p_buf += marked_text_len;
        if(p_buf >= buf_limit_pos) SEND_ERROR

        SKIP_SYMB(',')

        string* protocol = get_marked_text(storage, p_buf, '\"', &marked_text_len);
        if(ISNULL(protocol)) SEND_ERROR

        p_buf += marked_text_len;
        if(p_buf >= buf_limit_pos) SEND_ERROR
        
        p_buf = skip_spaces(p_buf, p_buf_limit);

        token_block cur_block = {.RE = RE, .protocol = protocol};
        VectorPush(storage->tokens_storage, &cur_block);
    }

    return;
}

#undef SEND_ERROR
#undef SKIP_SYMB(symb)
//----------------------------------------------------------------------------------------//

// TODO: error handling
// TODO: limit control other way
string* get_marked_text(lexer_data* storage, char* p_buf, const char symb_marker, uint* len){

    NASSERT(p_buf);
    assert(p_buf < p_lim);

    if(*p_buf != symb_marker) return 1;
    p_buf++;

    char* p_lim = storage->text_data->p_buf + storage->text_data->len_buf;
    uint string_len = 0;
    uint buf_pos    = 0;

    while(p_buf + buf_pos < p_lim && p_buf[buf_pos] != symb_marker){

        if(p_buf + buf_pos + 1 < p_lim && p_buf[buf_pos] == '\\' && p_buf[buf_pos + 1] == symb_marker){
            string_len++;
        }
        else{
            string_len++;
        }
    }

    if(p_buf + buf_pos + 1 >= p_lim) return 1;
    *len = buf_pos + 1;

    string* marked_text = StringCtor(string_len);

    for(uint string_pos = 0, uint n_symb == 0; string_pos < string_len; n_symb++, string_pos++){
        if(p_buf[string_pos] == '\\' && p_buf[string_pos + 1] == symb_marker){
            marked_text->data[string_pos] = symb_marker;
            n_symb++;
        }
        else{
            marked_text->data[string_pos] = p_buf[n_symb];
        }
    }

    return marked_text;
}
//----------------------------------------------------------------------------------------//


// TODO: хотелось бы добавить гибкости при наборе правил

#define SEND_ERROR EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u table definition", n_cur_table);
#define SKIP_SYMB(symb)                                     \\
{                                                            \\
    token_parse_symb_require(p_buf, (symb), n_cur_table);     \\
    p_buf++;                                                   \\
    p_buf = skip_spaces(p_buf, p_buf_limit);                    \\
}

#define max(a, b) ((a) > (b)) ? (a) : (b)

void get_tables_data(lexer_data* storage, const uint n_word){

    NASSERT(storage);

    uint        n_tables      = VectorSize(storage->name_tables.pos);
    const char* buf_limit_pos = storage->buffer + GetStorageBufSize(storage->text_data);

    while(!strcmp(p_buf, "$END$")){

        uint n_cur_table = VectorSize(storage->tables_storage) + 1;

        table_block cur_table_data = {};
        cur_table_data.name = StringCtor(p_buf, strlen(p_buf));
        cur_table_data.data = VectorNew(1, sizeof(string));
        
        p_buf = skip_word(p_buf, p_buf_limit);
              
        SKIP_SYMB('=')
        SKIP_SYMB('{')

        cur_table_data.max_elem_len = 0;

        while(*p_buf == '\"'){

            uint    marked_text_len = 0;
            string* table_elem      = get_marked_text(storage, p_buf, '\"', &marked_text_len);
            p_buf += marked_text_len;

            if(p_buf >= buf_limit_pos) SEND_ERROR

            SKIP_SYMB(',')

            VectorPush(cur_table_data.data, table_elem);
            cur_table_data.max_elem_len = max(cur_table_data.max_elem_len, StringLen(table_elem));
            free(table_elem);
        }
        SKIP_SYMB('}')

        VectorPush(storage->tables_storage, &cur_table_data);
    }

    return;
}

#undef SKIP_SYMB(symb)
#undef SEND_ERROR
//----------------------------------------------------------------------------------------//

void table_parse_symb_require(const char* p_buf, const char symb, const uint n_table){

    NASSERT(p_buf);

    if(*p_buf != symb){
        EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u table definition", n_table);
    }

    return;
}
//----------------------------------------------------------------------------------------//

void token_parse_symb_require(const char* p_buf, const char symb, const uint n_token){

    NASSERT(p_buf);

    if(*p_buf != symb){
        EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u token definition", n_token);
    }

    return;
}
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

    if(buf_pos >= buf_pos_limit) return NULL;

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

static void insert_tables_data(const lexer_data* storage, string* output_text){
                         
    NASSERT(storage);    
    NASSERT(output_text);

    const uint n_tables = VectorSize(tables_storage);

    for(uint n_table = 0; n_table < n_tables; n_table++){

        table_block* cur_table_storage = VectorGet(storage->tables_storage, n_table);

        StringPush(output_text, "const%schar%s%s[][%u]{", 
                                CODE_SEPATATOR, cur_table_storage->name->data, CODE_SEPATATOR, cur_table_storage->max_elem_len);
        
        const uint n_elems = VectorSize(cur_table_storage->data); 
        for(uint n_elem = 0; n_elem < n_elems; n_elem++){
            string* cur_elem = (string*)VectorGet(cur_table_storage->data, n_elem);
            StringPush(output_text, "\"%s\",", cur_elem->data);
        }

        StringPush(output_text, "};%s", CODE_SEPATATOR);
    }

    return;
}
//----------------------------------------------------------------------------------------//

static void insert_lexer_body(const lexer_data* storage, string* output_text){

    NASSERT(storage);
    NASSERT(output_text);

    lex_graph* DFA = generateDFA(storage);

    set* labels_set = get_labels_data(DFA);
    set* visited_states = set_new(VectorSize(DFA->states));

    insert_state_in_body(storage, output_text, DFA, labels_set, visited_states, DFA->start_state);

    set_delete(labels_set);
    set_delete(visited_states);

    return;
}
//----------------------------------------------------------------------------------------//

static lex_graph* generateDFA(const lexer_data* storage){

    NASSERT(storage);

    const uint n_tokens = VectorSize(tokens_storage);

    lex_graph* total_nfa_graph = NULL;
    if(n_tokens > 0){

        token_block* cur_token_data = VectorGet(storage->tokens_storage, 0);

        Node* ast_tree        = CreateAST(cur_token_data->RE);
              total_nfa_graph = ConvertTreeToNFA(ast_tree, 0);
        
        VectorPush(total_nfa_graph->accept_states_meta_data, 0);
    }

    for(uint n_token = 1; n_token < n_tokens; n_token++){

        token_block* cur_token_data = VectorGet(storage->tokens_storage, n_token);

        Node*      ast_tree      = CreateAST(cur_token_data->RE);
        lex_graph* cur_nfa_graph = ConvertTreeToNFA(ast_tree, n_token);

        VectorPush(cur_nfa_graph->accept_states_meta_data, n_token);

        MergeGraphsParallel(total_nfa_graph, cur_nfa_graph);
    }

    lex_graph* DFA = ConvertNFAtoDFA(total_nfa_graph);
    LexGraphRemove(total_nfa_graph);

    // MinimizeDFA(DFA);

    return DFA;
}
//----------------------------------------------------------------------------------------//

// TODO: maybe if else nor switch
static void insert_state_in_body(const lexer_data* storage, string* output_text, const lex_graph* DFA, const set* labels_set, const set* visited_states, const uint n_state){

    NASSERT(storage);
    NASSERT(output_text);
    NASSERT(DFA);
    NASSERT(labels_set);

    set_insert(visited_states, n_state);

    state* cur_state = VectorGet(DFA->states, n_state);

    if(set_find(labels_set, n_state)){
        string* label = generate_state_label(n_state);
        StringPush(output_text, label);
        StringPush(output_text, CODE_SEPARATOR);

        StringDtor(label);
    }

    // TODO: temporary
    StringPush(output_text, "if(%s>=%s){",
                             BUF_COUNTER_IN_CODE_NAME, BUF_COUNTER_LIMIT_NAME);
    
    StringPush(output_text, "printf(\"Lexer error occurs, unable to recognize token on position \%u\n\",%s+%s);%s
                                return%s%s;%s",
                                BUF_INIT_POS_IN_CODE_NAME, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR, CODE_SEPARATOR, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR);
    
    StringPush(output_text, "}%s", CODE_SEPARATOR);
    uint n_conns = VectorSize(cur_state->conns);

    if(n_conns != 0){
        StringPush(output_text, "switch(%s[%s]){%s", BUF_POINTER_IN_CODE_NAME, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR);

        for(uint n_conn = 0; n_conn < n_conns; n_conn++){
            conn* cur_conn = VectorGet(cur_state->conns, n_conn);

            StringPush(output_text, "case%s%u:{%s%s++;%s", 
                        CODE_SEPARATOR, cur_conn->symb, CODE_SEPARATOR, BUF_COUNTER_IN_CODE_NAME);

            if(!set_find(visited_states, cur_conn->next_state)){
            
                insert_state_in_body(storage, output_text, DFA, labels_set, visited_states, cur_conn->next_state);     
            }
            else{
                StringPush(output_text, "goto%s%s%s", CODE_SEPARATOR, generate_state_label(cur_conn->next_state), CODE_SEPARATOR);
            }

            StringPush(output_text, "}%s", CODE_SEPARATOR);
        }

        StringPush(output_text, "default:{%s");

        if(VecsetFind(DFA->accept_states, n_state)){
            vec_set* token_idents       = (vec_set*)VectorGet(DFA->accept_states_meta_data, n_state);

            uint primary_token_ident    = VecsetGet(token_idents, 0);
            token_block* cur_token_data = VectorGet(storage->tokens_storage, primary_token_ident);

            StringPush(output_text, "%s%s", cur_token_data->protocol, CODE_SEPARATOR);
        }
        else{
            // TODO: временно
            StringPush(output_text, "printf(\"Lexer error occurs, unable to recognize token on position \%u\n\",%s+%s);%s
                                     return%s%s;%s",
                                     BUF_INIT_POS_IN_CODE_NAME, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR, CODE_SEPARATOR, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR);
        }
        StringPush(output_text, "}%s", CODE_SEPARATOR);
    }
    else{ // n_conns == 0

        // TODO: дублирование
        if(VecsetFind(DFA->accept_states, n_state)){
            uint* token_ident = VectorGet(DFA->accept_states_meta_data);

            token_block* cur_token_data = VectorGet(storage->tokens_storage, token_ident);

            StringPush(output_text, "%s%s", cur_token_data->RE, CODE_SEPARATOR);
        }
        else{
            StringPush(output_text, "printf(\"Lexer error occurs, unable to recognize token on position \%u\n\",%s+%s);%s
                                    return%s%s;%s",
                                    BUF_INIT_POS_IN_CODE_NAME, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR, CODE_SEPARATOR, BUF_COUNTER_IN_CODE_NAME, CODE_SEPARATOR);
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//

set* get_labels_data(const lex_graph* dfa_graph){

    NASSERT(dfa_graph);

    // TODO: correct_size?
    set* labels_set     = set_new(VectorSize(dfa_graph->states));
    set* visited_states = set_new(VectorSize(dfa_graph->states));

    handle_state_to_labels_data(labels_set, visited_states, dfa_graph, dfa_graph->start_states);

    set_delete(visited_states);

    return labels_set;
}
//----------------------------------------------------------------------------------------//

// TODO: rename to get cycled states and add to diff library
void handle_state_to_labels_data(set* labels_set, set* visited_states, const lex_graph* dfa_graph, uint n_state){

    NASSERT(labels_set);
    NASSERT(visited_states);
    NASSERT(dfa_graph);

    if(set_find(visited_states, n_state)){
        if(!set_find(labels_set, n_state)){
            set_insert(labels_set, n_state);
        }
        return;
    }

    set_insert(visited_states, n_state);

    state*  cur_state = VectorGet(dfa_graph, n_state);
    uint    n_conns   = VectorSize(cur_state->conns);

    for(uint n_conn = 0; n_conn < n_conns; n_conn++){
        conn* cur_conn = VectorGet(cur_state->conns, n_conn);
        handle_state_to_labels_data(labels_set, visited_states, dfa_graph, cur_conn->next_state);
    }

    return;
}
//----------------------------------------------------------------------------------------//

static void remove_lexer_data(lexer_data* obj){

    NASSERT(obj);

    TextStorageRemove(obj->text_data);
    StringDtor(obj->text_buffer);

    vector* tables_storage = obj->tables_storage;
    uint    n_tables       = VectorSize(tables_storage);

    for(uint n_table = 0; n_table < n_tables; n_table++){

        table_block* cur_table_data = VectorGet(tables_storage, n_table);

        StringDtor(cur_table_data->name);

        uint n_table_elems = VectorSize(tables_storage->data);
        for(uint n_table_elem = 0; n_table_elem < n_table_elems; n_table_elem++){

            string* cur_table_elem = VectorGet(tables_storage->data, n_table_elem);
            StringDtor(cur_table_elem);
        }

        VectorDelete(tables_storage->data);
    }

    VectorDelete(tables_storage);

    vector* tokens_storage = obj->tokens_storage;
    uint    n_tokens       = VectorSize(tokens_storage);

    for(uint n_token = 0; n_token < n_tokens; n_token++){

        token_block* cur_token_data = VectorGet(tokens_storage, n_token);
        StringDtor(cur_token_data->RE);
        StringDtor(cur_token_data->protocol);
    }

    VectorDelete(tokens_storage);

    StringDtor(text_before_body);
    StringDtor(text_after_body);

    free(obj);

    return;
}
//----------------------------------------------------------------------------------------//

/*
        vector* table_storage = VectorNew(1, sizeof(string));
        VectorPush(storage->name_tables.data, table_storage);
        VectorDelete(table_storage);
        VectorGet(storage->name_tables.data, VectorSize(storage->name_tables.data) - 1, table_storage);

        uint n_word = 0;
        VectorGet(storage->name_tables.pos, n_table, &n_word);
        n_word += 2;

        word* cur_word = GetWord(storage->text_data, n_word);
        if(cur_word == NULL){
            EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u table definition", n_table);
        }

        char* p_buf = cur_word->pt;
        
        table_parse_symb_require(p_buf, '=', n_table);
        p_buf = skip_word(p_buf, buf_limit_pos);

        if(p_buf == NULL){
            EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u table definition", n_table);
        }

        table_parse_symb_require(p_buf, '{', n_table);
        p_buf = skip_word(p_buf, buf_limit_pos);
        if(p_buf == NULL){
            EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u table definition", n_table);
        }

        while(*p_buf == '\"'){

            uint len = 0;
            string* table_elem = get_marked_text(storage, p_buf, '\"', &len);
            p_buf += len;

            if(p_buf >= buf_limit_pos){
                EDLOG(OWN, "WRONG GRAMATIC FOUND ON %u table definition", n_table);
            }
            table_parse_symb_require(p_buf, ',', n_table);
            p_buf = skip_word(p_buf, buf_limit_pos);

            VectorPush(table_storage, table_elem);
            StringDtor(table_elem);
        }
*/