#include "lex_graph.h"
#include "Structs/set.h"
#include "Structs/vec_set.h"
#include "Structs/vector.h"
#include "node.h"
#include "vector.h"
#include "assert.h"
#include <cstdarg>
#include "spec_constants.h"

// TODO: redo to queue
// TODO: parallel optimization required
// TODO: add smth+

// TODO: придумать более подробное описание
/// @brief хранилище групп state'ов, которые собираются при генерации DFA из NFA.
vector*    states_package      = NULL;

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

static lex_graph* lex_graph_init();
// static lex_graph* lex_graph_copy(const lex_graph* from);

/**
 * @brief номер нового state это текущее количество state'ов в графе + 1.
 * 
 * @return uint номер созданного state'a
 */
static uint      create_state(const lex_graph* graph);

/**
 * @brief создаёт связь(conn) от узла from state к узлу to_state. Добавляет символ в алфавит, если его там нет
 */
static void      add_conn(const lex_graph* graph, uint from_state, uint to_state, char symb);

/**
 * @brief  (A | B). выдаёт граф, полученный в результате параллельного обьединения obj1, obj2.
 */
static aux_graph merge_parallel(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2);

/**
 * @brief  AB. выдаёт граф, полученный в результате прямого обьединения obj1, obj2.
 */
static aux_graph merge_straight(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2);

/**
 * @brief A*. выдаёт граф, полученный в результате зацикливания графа obj
 */
static aux_graph make_repeat(const lex_graph* graph, aux_graph* obj);

/**
 * @brief генерирует граф вида aux_graph на основе дерева ast_tree.
 */
static aux_graph parse_ast(const Node* ast_tree, const lex_graph* nfa_graph);

static void      generate_dot(const lex_graph* graph, char const * file_name);
static void      write_node_to_dot(const lex_graph* graph, const uint n_cur_state, FILE* output_file);
static void      generate_image(char const * input_file_name, char const * output_file_name);
static void      execute_term_cmd(char const * cmd_str, ...);

static void      state_dump(const state* cur_state, const uint n_state);

/**
 * @brief puts all states of epsilon closure of graph to the closure object
 */
static void      get_eps_closure(vec_set* closure, const lex_graph* graph, const uint n_state);
static vector* get_move_closures(const lex_graph* in_graph, const vec_set* state_closure, const uint n_substates, const char symb, int unite);
static vec_set*  get_move_closure(const lex_graph* in_graph, const vec_set* state_closure, const uint n_substates, const char symb);
static void handle_state(const lex_graph* in_graph, const lex_graph* out_graph, const uint n_state, int unite);

static void      mark_accept_states(const lex_graph* graph, uint accept_state_id, const vector* meta_data);
int              package_find(vec_set* closure);

/**
 * @brief вспомогательная функции для MergeGraphs. Перебрасывают соответствующие элементы graph_from в graph_to
 */
static void      alphabet_merge(lex_graph* graph_to, const lex_graph* graph_from);
static void      states_merge(lex_graph* graph_to, const lex_graph* graph_from);
static void      accept_states_merge(lex_graph* graph_to, const lex_graph* graph_from);

inline int is_graph_empty(aux_graph* graph){

    if(graph->start_state == 0 && graph->accept_state == 0){
        return 1;
    }
    return 0;

}
//----------------------------------------------------------------------------------------//

inline state* get_state(const lex_graph* graph, const uint n_state){

    return (state*)((char*)graph->states->data + (n_state - 1) * sizeof(state));
}
//----------------------------------------------------------------------------------------//

//static vec_set* get_accept_state_meta_data(const lex_graph* graph, const uint required_state);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//


lex_graph* ConvertTreeToNFA(const Node* ast_tree, vector* accept_state_meta_data){

    NASSERT(ast_tree);

    DLOG(INFO, "Attempt to convert tree(%p) to lex_graph", ast_tree);
    lex_graph* nfa_graph = lex_graph_init();

    aux_graph outcome_graph = parse_ast(ast_tree, nfa_graph);

    uint final_state = create_state(nfa_graph);
    aux_graph final_accept_state{.start_state = final_state, .accept_state = final_state};

    outcome_graph = merge_straight(nfa_graph, &outcome_graph, &final_accept_state);

    nfa_graph->start_state  = outcome_graph.start_state;
    
    VecsetPush(nfa_graph->accept_states, outcome_graph.accept_state);

    assert(accept_state_meta_data->size != 0);
    VectorPush(nfa_graph->accept_states_meta_data, VectorGenerateDuplicate(accept_state_meta_data));

    //!
    // TODO: fix memleak
    //!
    
    DLOG(INFO, "tree(%p) was successfuly converted to lex_graph(%p)", nfa_graph);
    
    return nfa_graph;
}
//----------------------------------------------------------------------------------------//

void DumpLexGraph(const lex_graph* graph, const char* file_name){

    NASSERT(graph);
	NASSERT(file_name);

    DLOG(LOG_TYPE::INFO, "attempt to generate \"%s.png\" image from data of lex_graph(%p)", file_name, graph);
	
    generate_dot(graph, GVIZ_DOT_NAME);

	generate_image(GVIZ_DOT_NAME, file_name);

	DLOG(LOG_TYPE::INFO, "showed graph %p", graph);	
	return;
}
//----------------------------------------------------------------------------------------//

lex_graph*  AuxilConvertNFA(const lex_graph* nfa_graph, int unite){

    NASSERT(nfa_graph);
    
    DLOG(LOG_TYPE::INFO, "Attempt to make convertion nfa graph(%p) to dfa graph", nfa_graph);

                states_package  = VectorNew(VectorSize(nfa_graph->states), sizeof(vec_set));
    lex_graph*  dfa_graph       = lex_graph_init();
    vec_set*    s0_closure      = VecsetCtor();

    get_eps_closure(s0_closure, nfa_graph, nfa_graph->start_state);
    DLOG(LOG_TYPE::INFO, "Got epsilon closure for state 0");

    dfa_graph->start_state  = create_state(dfa_graph);

    VectorPush(states_package, s0_closure);

    for(uint n_state = 1; n_state <= /* dynamic */ VectorSize(dfa_graph->states); n_state++){
        handle_state(nfa_graph, dfa_graph, n_state, unite);
        DLOG(LOG_TYPE::INFO, "state %u was successfuly handled", n_state);
    }

    uint n_accept_states = VecsetSize(nfa_graph->accept_states);

    for(uint n_acc_state = 0; n_acc_state < n_accept_states; n_acc_state++){
        uint accept_state_id = VecsetGet(nfa_graph->accept_states, n_acc_state);
        // VecsetPush(dfa_graph->accept_states, accept_state_id);
        // TODO:
        mark_accept_states(dfa_graph, accept_state_id, (vector*)VectorGet(nfa_graph->accept_states_meta_data, n_acc_state));
    }

    DLOG(LOG_TYPE::INFO, "accept states were marked");

    VectorDelete(states_package);
    states_package = NULL;

    DLOG(LOG_TYPE::INFO, "nfa graph(%p) was converted to dfa graph(%p)", nfa_graph, dfa_graph);
    return dfa_graph;
}
//----------------------------------------------------------------------------------------//

lex_graph*  ConvertNFAtoDFA(const lex_graph* nfa_graph){
    return AuxilConvertNFA(nfa_graph, 1);
}
//----------------------------------------------------------------------------------------//

lex_graph*  ConvertNFAtoAdvNFA(const lex_graph* nfa_graph){
    return AuxilConvertNFA(nfa_graph, 0);
}
//----------------------------------------------------------------------------------------//

void ConvertToCompleteFA(const lex_graph* fa_graph) {
    uint stock_state  = create_state(fa_graph);

    uint n_states = VectorSize(fa_graph->states);

    uint alph_size = VecsetSize(fa_graph->alphabet);
    set* alph_mask = set_new(alph_size);

    for(uint n_state = 0; n_state < n_states; n_state++) {
        set_clear(alph_mask);
        state* cur_state = (state*)VectorGet(fa_graph->states, n_state);
        
        uint n_conns = VectorSize(cur_state->conns);

        for(uint n_conn = 0; n_conn < n_conns; n_conn++){
            conn* cur_conn = (conn*)VectorGet(cur_state->conns, n_conn);
            set_insert(alph_mask, cur_conn->symb);
        }
        for(uint n_let = 0; n_let < alph_size; n_let++) {
            uint let = VecsetGet(fa_graph->alphabet, n_let);
            if (!set_test(alph_mask, let)) {
                add_conn(fa_graph, cur_state->id, stock_state, let);
            }
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//

lex_graph*  ConvertCDFAToAddition(const lex_graph* dfa_graph) {

    lex_graph* adit_graph = (lex_graph*)calloc(1, sizeof(lex_graph));
    CHECKALLOC(adit_graph);

    adit_graph->states          = VectorGenerateDuplicate(dfa_graph->states);
    adit_graph->alphabet        = VecsetDuplicate(dfa_graph->alphabet);
    adit_graph->accept_states   = VecsetCtor();

    adit_graph->start_state = dfa_graph->start_state;
    // todo
    adit_graph->accept_states_meta_data = NULL;
    
    uint n_states = VectorSize(dfa_graph->states);
    for(uint n_state = 0; n_state < n_states; n_state++) {
        state* cur_state = (state*)VectorGet(dfa_graph->states, n_state);

        if(!VecsetFind(dfa_graph->accept_states, cur_state->id)) {
            VecsetPush(adit_graph->accept_states, cur_state->id);
        }
    }

    return adit_graph;
}
//----------------------------------------------------------------------------------------//

void TextDumpLexGraph(const lex_graph* obj){

    NASSERT(obj);

    DLOG(LOG_TYPE::INFO, "DUMP vec_set<%p>", obj);

    MDLOG("start  state:  %u\n"
          "n_states:      %u\n"
          "alphabet size: %u\n", 
          obj->start_state, VectorSize(obj->states), VecsetSize(obj->alphabet));

    MDLOG("ALPHABET{");
    uint n_symbs = VecsetSize(obj->alphabet);

    for(uint n_symb = 0; n_symb < n_symbs; n_symb++){

        uint symb = VecsetGet(obj->alphabet, n_symb);
        MDLOG("%u: (%u, %c)", n_symb, symb, symb);
    }

    MDLOG("}\n\n"
          "STATES{");

    uint n_states = VectorSize(obj->states);

    for(uint n_state = 0; n_state < n_states; n_state++){
        
        state cur_state = {};
        VectorGet(obj->states, n_state, &cur_state);

        state_dump(&cur_state, n_state);
    }

    MDLOG("}\n");

    return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

lex_graph* lex_graph_init(){

    DLOG(LOG_TYPE::INFO, "Attempt to initialize lex_graph");
    lex_graph* obj = (lex_graph*)calloc(1, sizeof(lex_graph));
    CHECKALLOC(obj);

    obj->states                  = VectorNew(0, sizeof(state));
    obj->alphabet                = VecsetCtor(VECSET_INIT_CAPACITY);
    obj->accept_states           = VecsetCtor(VECSET_INIT_CAPACITY);
    obj->accept_states_meta_data = VectorNew(0, sizeof(vector));

    DLOG(LOG_TYPE::INFO, "lex_graph(%p) was successfuly initiated", obj);

    return obj;
}
//----------------------------------------------------------------------------------------//

// static lex_graph* lex_graph_copy(const lex_graph* from){

//     DLOG(LOG_TYPE::INFO, "Attempt to copy lex_graph %p", from);
//     lex_graph* obj = (lex_graph*)calloc(1, sizeof(lex_graph));
//     CHECKALLOC(obj);

//     obj->states                  = VectorGenerateDuplicate(from->states);
//     obj->alphabet                = VecsetDuplicate(from->alphabet);
//     obj->accept_states           = VecsetDuplicate(from->accept_states);

//     uint meta_data_size = VectorSize(from->accept_states_meta_data);
//     obj->accept_states_meta_data = VectorNew(meta_data_size, from->accept_states_meta_data->elem_size);

//     for (uint n_meta = 0; n_meta < meta_data_size; n_meta++) {
//         VectorPush(obj->accept_states_meta_data, VectorGenerateDuplicate((vector*)VectorGet(from->accept_states_meta_data, n_meta)));        
//     }
    
//     DLOG(LOG_TYPE::INFO, "lex_graph(%p) was successfuly copied", obj);

//     return obj;
// }
// //----------------------------------------------------------------------------------------//

void LexGraphRemove(lex_graph* graph){

    if(ISNULL(graph)) return;

    DLOG(LOG_TYPE::INFO, "Attempt to remove lex_graph(%p)", graph);
    
    //!
    // TODO:
    return;

    vector* states      = graph->states;
    uint    n_states    = VectorSize(graph->states);

    for(uint n_state = 0; n_state < n_states; n_state++){
        state* cur_state = (state*)VectorGet(states, n_state);
        VectorDelete(cur_state->conns);
    }

    uint n_accept_states = VectorSize(graph->accept_states_meta_data);

    // TODO: fix memleak
    // for(uint n_accept_state = 0; n_accept_state < n_accept_states; n_accept_state++){
    //     VecsetDtor((vec_set*)VectorGet(graph->accept_states_meta_data, n_accept_state));
    // }

    VectorDelete(states);
    VecsetDtor(graph->alphabet);
    VecsetDtor(graph->accept_states);
    VectorDelete(graph->accept_states_meta_data);

    free(graph);
    DLOG(LOG_TYPE::INFO, "lex_graph(%p) was removed successfuly", graph);

    return;
}
//----------------------------------------------------------------------------------------//

static uint create_state(const lex_graph* graph){

    NASSERT(graph);

    state temp = {};
    temp.conns = VectorNew(0, sizeof(conn));
    temp.id    = graph->states->size + 1;

    VectorPush(graph->states, &temp);

    return temp.id;
}
//----------------------------------------------------------------------------------------//

static void add_conn(const lex_graph* graph, uint from_state, uint to_state, char symb){

    NASSERT(graph);

    conn temp = {to_state, symb};

    // TODO: check situation index != state_id
    state* tmp_state = (state*)VectorGet(graph->states, from_state - 1);
    VectorPush(tmp_state->conns, &temp);

    if(!VecsetFind(graph->alphabet, symb) && symb != SPEC_EPS_VAL){
        VecsetPush(graph->alphabet, symb);
    }

    return;
}
//----------------------------------------------------------------------------------------//

static aux_graph merge_parallel(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2){

    NASSERT(graph);
    NASSERT(obj1);
    NASSERT(obj2);
    
    uint common_start_state  = create_state(graph);
    uint common_accept_state = create_state(graph);

    add_conn(graph, common_start_state, obj1->start_state, SPEC_EPS_VAL);
    add_conn(graph, common_start_state, obj2->start_state, SPEC_EPS_VAL);

    add_conn(graph, obj1->accept_state, common_accept_state, obj1->accept_state_symb);
    add_conn(graph, obj2->accept_state, common_accept_state, obj2->accept_state_symb);

    aux_graph new_graph = {common_start_state, common_accept_state, SPEC_EPS_VAL};

    return new_graph;
}
//----------------------------------------------------------------------------------------//

static aux_graph merge_straight(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2){

    NASSERT(graph);
    NASSERT(obj1);
    NASSERT(obj2);

    add_conn(graph, obj1->accept_state, obj2->start_state, obj1->accept_state_symb);

    aux_graph new_graph = {obj1->start_state, obj2->accept_state, obj2->accept_state_symb};

    return new_graph;
}
//----------------------------------------------------------------------------------------//

static aux_graph make_repeat(const lex_graph* graph, aux_graph* obj){

    NASSERT(graph);
    NASSERT(obj);

    uint new_state = create_state(graph);

    add_conn(graph, new_state, obj->start_state, SPEC_EPS_VAL);
    add_conn(graph, obj->accept_state, new_state, obj->accept_state_symb);

    aux_graph new_graph = {new_state, new_state, SPEC_EPS_VAL};

    return new_graph;
}
//----------------------------------------------------------------------------------------//

static aux_graph parse_ast(const Node* ast_tree, const lex_graph* nfa_graph){
    
    NASSERT(ast_tree);
    NASSERT(nfa_graph);

    DLOG(LOG_TYPE::INFO, "Attempt parsing Node(%p)", ast_tree);

    // Парсим левое и правое поддеревья.
    aux_graph left_graph  = {};
    aux_graph right_graph = {};

    if(IsValid(ast_tree->left)){
        left_graph = parse_ast(ast_tree->left, nfa_graph);
    }
    if(IsValid(ast_tree->right)){
        right_graph = parse_ast(ast_tree->right, nfa_graph);
    }

    // Соединияем полученные графы, на основе значения в дереве.
    char node_val = *(char*)ast_tree->val;

    if(node_val == SPEC_OR_VAL){
        assert(!is_graph_empty(&left_graph) && !is_graph_empty(&right_graph));

        return merge_parallel(nfa_graph, &left_graph, &right_graph);
    }
    else if(node_val == SPEC_BOND_VAL){
        assert(!is_graph_empty(&left_graph) && !is_graph_empty(&right_graph));

        return merge_straight(nfa_graph, &left_graph, &right_graph);    
    }
    else if(node_val == SPEC_REP_VAL){
        assert(is_graph_empty(&left_graph) && !is_graph_empty(&right_graph));

        return make_repeat(nfa_graph, &right_graph);    
    }

    assert(is_graph_empty(&left_graph) && is_graph_empty(&right_graph));

    // если текущий узел - лист, то дополняем алфавит и возвращаем граф из одной вершины
    uint new_state = create_state(nfa_graph);

    if(!VecsetFind(nfa_graph->alphabet, node_val)){
        if(node_val != SPEC_EPS_VAL){
            VecsetPush(nfa_graph->alphabet, node_val);
        }
    }

    aux_graph graph = {new_state, new_state, node_val};

    DLOG(LOG_TYPE::INFO, "Parsing Node(%p) completed", ast_tree);
    return graph;
}
//----------------------------------------------------------------------------------------//

static void generate_dot(const lex_graph* graph, char const * file_name){

	NASSERT(graph);
	NASSERT(file_name);

	FILE* tmp_file = fopen(file_name, "w");

	if(ISNULL(tmp_file)){
		EDLOG(OWN, "can't create/read file %s", file_name);
	}
	fprintf(tmp_file, "digraph Tree{\n");

    fprintf(tmp_file,    "%d[style = \"filled\", fillcolor = \"#12d559\", "
        "shape = \"record\", label = \"{"
        "%d}\"];\n",
        graph->start_state, graph->start_state);
    
    uint n_accept_states = VecsetSize(graph->accept_states);

    for(uint n_state = 0; n_state < n_accept_states; n_state++){
        uint state_id = VecsetGet(graph->accept_states, n_state);

        if(state_id != graph->start_state){
            fprintf(tmp_file,    "%d[style = \"filled\", fillcolor = \"#d53412\", "
                "shape = \"record\", label = \"{"
                "%d}\"];\n",
                state_id, state_id);
        }
    }

    for(uint n_state = 1; n_state <= graph->states->size; n_state++){

        if(n_state == graph->start_state || VecsetFind(graph->accept_states, n_state)) continue;

        fprintf(tmp_file,    "%d[style = \"filled\", fillcolor = \"#d5d212\", "
            "shape = \"record\", label = \"{"
            "%d}\"];\n",
            n_state, n_state);
    }
    
    for(uint n_state = 1; n_state <= graph->states->size; n_state++){
        write_node_to_dot(graph, n_state, tmp_file);
    }

	fprintf(tmp_file, "}\n");

	fclose(tmp_file);

	DLOG(LOG_TYPE::INFO, "file %s was generated for graph %p", file_name, graph);
	return;
}
//----------------------------------------------------------------------------------------//

static void write_node_to_dot(const lex_graph* graph, const uint n_cur_state, FILE* output_file){

	NASSERT(graph);
	NASSERT(output_file);

    state cur_state = {};
    VectorGet(graph->states, n_cur_state - 1, &cur_state);

    vector* conns   = cur_state.conns;
    uint    n_conns = conns->size;

    conn tmp_conn = {};

    for(uint n_conn = 0; n_conn < n_conns; n_conn++){
        VectorGet(conns, n_conn, &tmp_conn);
        
        state* next_state = get_state(graph, tmp_conn.next_state);
        if(tmp_conn.symb == SPEC_EPS_VAL){
            fprintf(output_file, "%d->%d[ label =\"eps\"];\n", cur_state.id, next_state->id);
        }
        else{
            fprintf(output_file, "%d->%d[ label =\" %c\"];\n", cur_state.id, next_state->id, tmp_conn.symb);
        }
    }

	//ToLog(LOG_TYPE::INFO, "Node %p was written to file", node);
	return;
}
//----------------------------------------------------------------------------------------//

static void generate_image(char const * input_file_name, char const * output_file_name){

	NASSERT(input_file_name);
	NASSERT(output_file_name);

	assert(input_file_name != output_file_name);

	execute_term_cmd("dot -Tpng %s -o %s", input_file_name, output_file_name);
	return;
}
//----------------------------------------------------------------------------------------//

static void execute_term_cmd(char const * cmd_str, ...){

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

static void get_eps_closure(vec_set* closure, const lex_graph* graph, const uint n_state){

    NASSERT(graph);
    NASSERT(closure);

    state cur_state = {};

    VectorGet(graph->states, n_state - 1, &cur_state);

    VecsetPush(closure, n_state);

    uint n_conns = VectorSize(cur_state.conns);

    for(uint n_conn = 0; n_conn < n_conns; n_conn++){
        conn cur_conn = {};
        VectorGet(cur_state.conns, n_conn, &cur_conn);
        if(cur_conn.symb == SPEC_EPS_VAL){
            
            if(!VecsetFind(closure, cur_conn.next_state)){
                get_eps_closure(closure, graph, cur_conn.next_state);
            }
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//

static vec_set* get_move_closure(const lex_graph* in_graph, const vec_set* state_closure, const uint n_substates, const char symb){

    vector* closures = get_move_closures(in_graph, state_closure, n_substates, symb, 1);
    vec_set* closure = *(vec_set**)VectorGet(closures, 0);
    VectorDelete(closures);
    return closure;
}
//----------------------------------------------------------------------------------------//

static vector* get_move_closures(const lex_graph* in_graph, const vec_set* state_closure, const uint n_substates, const char symb, int unite){

    NASSERT(in_graph);
    NASSERT(state_closure);
    vec_set* closure = NULL;
    vector* closures = VectorNew(0, sizeof(vec_set*));
    
    if (unite){
        closure = VecsetCtor(VECSET_INIT_CAPACITY);
    }

    for(uint n_sub_state = 0; n_sub_state < n_substates; n_sub_state++){

        uint sub_state_id = VecsetGet(state_closure, n_sub_state);

        state sub_state = {};
        VectorGet(in_graph->states, sub_state_id - 1, &sub_state);

        uint n_conns = VectorSize(sub_state.conns);

        for(uint n_conn = 0; n_conn < n_conns; n_conn++){
      
            conn cur_conn = {};
            VectorGet(sub_state.conns, n_conn, &cur_conn);

            if(cur_conn.symb == symb){
                if(unite) {
                    if(!VecsetFind(closure, cur_conn.next_state)){
                        get_eps_closure(closure, in_graph, cur_conn.next_state);
                    }
                }
                else {
                    closure = VecsetCtor(VECSET_INIT_CAPACITY);
                    get_eps_closure(closure, in_graph, cur_conn.next_state);
                
                    VectorPush(closures, &closure);
                    // todo: fix
                    closure = NULL;
                }
            }
        }
    }

    if(unite) {
        VectorPush(closures, &closure);
    }
    return closures;
}
//----------------------------------------------------------------------------------------//

// TODO: optimisation required
static void handle_state(const lex_graph* in_graph, const lex_graph* out_graph, const uint n_state, int unite){

    NASSERT(in_graph);
    NASSERT(out_graph);

    uint n_symbs = VecsetSize(in_graph->alphabet);

    vec_set state_closure = {};
    VectorGet(states_package, n_state - 1, &state_closure);
    
    uint n_substates    = VecsetSize(&state_closure);

    for(uint n_symb = 0; n_symb < n_symbs; n_symb++){

        uint symb_val         = VecsetGet(in_graph->alphabet, n_symb);
        vector* symb_closures = get_move_closures(in_graph, &state_closure, n_substates, symb_val, unite);

        uint n_closures = VectorSize(symb_closures);
        for(int i = 0; i < n_closures; i++) {
            vec_set* symb_closure = *(vec_set**)VectorGet(symb_closures, i);
            
            int n_pack = package_find(symb_closure);

            if(n_pack < 0){
                // NOT FOUND

                if(VecsetSize(symb_closure) == 0){
                    VecsetDtor(symb_closure);
                }
                else{
                    VectorPush(states_package, symb_closure);
                    uint n_new_state = create_state(out_graph);
                    add_conn(out_graph, n_state, n_new_state, symb_val);

                    // TODO: fix не там удаление, сделать копирование
                    free(symb_closure);
                }
            }
            else if(n_pack < VectorSize(states_package)){

                // FOUND
                add_conn(out_graph, n_state, n_pack + 1, symb_val);
                VecsetDtor(symb_closure);
            }
            else{
                // TODO: REMOVE AFTER FUN
                assert(0);
                VecsetDtor(symb_closure);
            }
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//

int package_find(vec_set* closure){

    NASSERT(closure);

    uint n_closures = VectorSize(states_package);
    for(uint n_closure = 0; n_closure < n_closures; n_closure++){

        vec_set cur_closure = {};
        VectorGet(states_package, n_closure, &cur_closure);
        if(!set_cmp(cur_closure.st, closure->st)){
            return n_closure;
        }
    }

    return -1;
}
//----------------------------------------------------------------------------------------//

static void state_dump(const state* cur_state, const uint n_state){

    MDLOG("STATE %u: %u", n_state, cur_state->id);

    uint n_conns = VectorSize(cur_state->conns);

    for(uint n_conn = 0; n_conn + 1< n_conns; n_conn++){

        conn cur_conn = {};
        VectorGet(cur_state->conns, n_conn, &cur_conn);
        if(cur_conn.symb == SPEC_EPS_VAL){
            MDLOG("%u(%u, eps), ", cur_conn.next_state, cur_conn.symb);
        }
        else{
            MDLOG("%u(%u, %c), ", cur_conn.next_state, cur_conn.symb, cur_conn.symb);
        }
    }

    if(n_conns > 0){
        conn cur_conn = {};
        VectorGet(cur_state->conns, n_conns - 1, &cur_conn);
        if(cur_conn.symb == SPEC_EPS_VAL){
            MDLOG("%u(%u, eps)\n", cur_conn.next_state, cur_conn.symb);
        }
        else{
            MDLOG("%u(%u, %c)\n", cur_conn.next_state, cur_conn.symb, cur_conn.symb);
        }    
    }

    return;
}
//----------------------------------------------------------------------------------------//

static void mark_accept_states(const lex_graph* graph, const uint accept_state_id, const vector* meta_data){

    NASSERT(graph);

    uint n_closures           = VectorSize(states_package);
    // uint input_meta_data_size = VecsetSize(accept_state_meta_data);

    for(uint n_closure = 0; n_closure < n_closures; n_closure++){

        vec_set cur_closure = {};
        VectorGet(states_package, n_closure, &cur_closure);

        if(VecsetFind(&cur_closure, accept_state_id) && !VecsetFind(graph->accept_states, n_closure + 1)){
            VecsetPush(graph->accept_states, n_closure + 1);
            VectorPush(graph->accept_states_meta_data, VectorGenerateDuplicate(meta_data));
            // todo: memleak
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//
