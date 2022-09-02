#include "lex_graph.h"
#include "node.h"
#include "assert.h"
#include <cstdarg>
#include "spec_constants.h"

// TODO: redo to queue
// TODO: parallel optimization required
// TODO: add smth+
// TODO: возможность создания не .o файла а обычного текстого cpp файла
// TODO: генерить не текст, а байтовый код

vector*    states_package      = NULL;

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

static uint      create_state(const lex_graph* graph);
static void      add_conn(const lex_graph* graph, uint from_state, uint to_state, char symb);

static aux_graph merge_parallel(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2);
static aux_graph merge_straight(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2);

static aux_graph parse_ast(const Node* ast_tree, const lex_graph* nfa_graph);

static void      generate_dot(const lex_graph* graph, char const * file_name);
static void      write_node_to_dot(const lex_graph* graph, const uint n_cur_state, FILE* output_file);
static void      generate_image(char const * input_file_name, char const * output_file_name);
static void      execute_term_cmd(char const * cmd_str, ...);

static void      state_dump(const state* cur_state, const uint n_state);
static void      dump_package_states();
/**
 * @brief puts all states of epsilon closure of graph to the closure object
 */
static void      get_eps_closure(vec_set* closure, const lex_graph* graph, const uint n_state);
static vec_set*  get_move_closure(const lex_graph* in_graph, const vec_set* state_closure, const uint n_substates, const char symb);
static void      handle_state(const lex_graph* in_graph, const lex_graph* out_graph, const uint n_state);

static void      mark_accept_states(const lex_graph* graph, const uint accept_state_id, const vec_set* accept_state_meta_data);

int              package_find(vec_set* closure);

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


lex_graph* ConvertTreeToNFA(const Node* ast_tree, const uint accept_state_meta_data){

    NASSERT(ast_tree);

    DLOG
    lex_graph* nfa_graph = LexGraphInit();

    aux_graph outcome_graph = parse_ast(ast_tree, nfa_graph);

    nfa_graph->start_state  = outcome_graph.start_state;

    VecsetPush(nfa_graph->accept_states, outcome_graph.accept_state);
    VectorPush(nfa_graph->accept_states_meta_data, &accept_state_meta_data);

    return nfa_graph;
}
//----------------------------------------------------------------------------------------//

// TODO: local??
lex_graph* LexGraphInit(){

    lex_graph* obj = (lex_graph*)calloc(1, sizeof(lex_graph));
    CHECKALLOC(obj);

    obj->states                  = VectorNew(0, sizeof(state));
    obj->alphabet                = VecsetCtor(VECSET_INIT_CAPACITY);
    obj->accept_states           = VecsetCtor(VECSET_INIT_CAPACITY);
    obj->accept_states_meta_data = VectorNew(0, sizeof(vec_set));

    return obj;
}
//----------------------------------------------------------------------------------------//

void LexGraphRemove(lex_graph* graph){

    vector* states      = graph->states;
    uint    n_states    = VectorSize(graph->states);

    state temp_state = {};
    for(uint n_state = 0; n_state < n_states; n_state++){
        VectorGet(states, n_state, &temp_state);
        VectorDelete(temp_state.conns);
    }

    uint n_accept_states = VectorSize(graph->accept_states_meta_data);
    for(uint n_accept_state = 0; n_accept_state < n_accept_states; n_accept_state++){
        VecsetDtor(VectorGet(graph->accept_states_meta_data, n_accept_state));
    }

    VectorDelete(states);
    VecsetDtor(graph->alphabet);
    VecsetDtor(graph->accept_states);
    VectorDelete(graph->accept_states_meta_data);

    free(graph);

    return;
}
//----------------------------------------------------------------------------------------//

void DumpLexGraph(const lex_graph* graph, const char* file_name){

    NASSERT(graph);
	
	generate_dot(graph, GVIZ_DOT_NAME);
	generate_image(GVIZ_DOT_NAME, file_name);

	DLOG(LOG_TYPE::INFO, "showed graph %p", graph);	
	return;
}
//----------------------------------------------------------------------------------------//

lex_graph*  ConvertNFAtoDFA(const lex_graph* nfa_graph){

    NASSERT(nfa_graph);
    
                states_package  = VectorNew(VectorSize(nfa_graph->states), sizeof(vec_set));
    lex_graph*  dfa_graph       = LexGraphInit();
    
    vec_set*    s0_closure      = VecsetCtor(VECSET_INIT_CAPACITY);

    get_eps_closure(s0_closure, nfa_graph, nfa_graph->start_state);
    
    dfa_graph->start_state  = create_state(dfa_graph);

    VectorPush(states_package, s0_closure);

    for(uint n_state = 1; n_state <= /* dynamic */ VectorSize(dfa_graph->states); n_state++){
        handle_state(nfa_graph, dfa_graph, n_state);
    }

    uint n_accept_states = VecsetSize(nfa_graph->accept_states);

    for(uint n_acc_state = 0; n_acc_state < n_accept_states; n_acc_state++){

        uint accept_state_id = VecsetGet(nfa_graph->accept_states, n_acc_state);
        mark_accept_states(dfa_graph, accept_state_id);
    }

    VectorDelete(states_package);
    states_package = NULL;

    return dfa_graph;
}
//----------------------------------------------------------------------------------------//

void TextDumpLexGraph(const lex_graph* obj){

    NASSERT(obj);

    DLOG(INFO, "DUMP vec_set<%p>", obj);

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

/*
    lets just add states, symbs from graph2 to graph1 and remove graph2 after adding
*/
void  MergeGraphsParallel(lex_graph* graph1, lex_graph* graph2){

    NASSERT(graph1);
    NASSERT(graph2);

    const uint n_symbs_in_graph2 = VecsetSize(graph2->alphabet);
    for(uint n_symb = 0; n_symb < n_symbs_in_graph2; n_symb++){

        uint cur_symb = VecsetGet(graph2->alphabet, n_symb);
        if(!VecsetFind(graph1->alphabet, cur_symb)){
            VecsetPush(graph1->alphabet, cur_symb);
        }
    }

    const uint n_states_in_graph2 = VectorSize(graph2->states);
    const uint n_states_in_graph1 = VectorSize(graph1->states);
    
    for(uint n_state = 0; n_state < n_states_in_graph2; n_state++){
        
        state state_to_add = {};
        state cur_state    = {};
        VectorGet(graph2->states, n_state, &cur_state);

        if(cur_state.id != graph2->start_state){
            state_to_add.id = cur_state.id + n_states_in_graph1;
        }
        else{
            state_to_add.id = graph1->start_state;
        }
        state_to_add.conns = VectorNew(VectorSize(cur_state.conns), sizeof(conn));

        const uint n_conns = VectorSize(cur_state.conns);
        for(uint n_conn = 0; n_conn < n_conns; n_conn++){

            conn conn_to_add = {};
            conn cur_conn    = {};
            
            VectorGet(cur_state.conns, n_conn, &cur_conn);

            if(cur_conn.next_state != graph2->start_state){
                conn_to_add.next_state = cur_conn.next_state + n_states_in_graph1;
            }
            else{
                conn_to_add.next_state = graph1->start_state;
            }

            conn_to_add.symb = cur_conn.symb;

            VectorPush(state_to_add.conns, &conn_to_add);
        }

        VectorPush(graph1->states, &state_to_add);
    }

    const uint n_accept_states_in_graph2 = VecsetSize(graph2->accept_states);
    for(uint n_accept_state = 0; n_accept_state < n_accept_states_in_graph2; n_accept_state++){
        
        uint cur_state = VecsetGet(graph2->accept_state, n_accept_state);

        vec_set* cur_state_meta_data      = (vec_set*)VectorGet(graph2->accept_states_meta_data, cur_state);
        uint     cur_state_meta_data_size = VecsetSize(cur_state_meta_data);
        vec_set* new_state_meta_data      = VecsetCtor(input_meta_data_size);
        
        for(uint n_data_block = 0; n_data_block < cur_state_meta_data_size; n_data_block++){
            void* data_block = VecsetGet(cur_state_meta_data, n_data_block);

            VecsetPush(new_state_meta_data, data_block);
        }

        if(cur_state != graph2->start_state){
            cur_state += n_states_in_graph1;
        }
        else{
            cur_state = graph1->start_state;
        }

        assert(VecsetSize(graph1->accept_states) == VectorSize(graph1->accept_states_meta_data));

        VecsetPush(graph1->accept_states, cur_state);
        VectorPush(graph1->accept_states_meta_data, new_state_meta_data);

        free(new_state_meta_data);
    }

    LexGraphRemove(graph2);

    return;
}

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

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
    
    state tmp_state = {};

    // TODO: check situation index != state_id
    VectorGet(graph->states, from_state - 1, &tmp_state);
    VectorPush(tmp_state.conns, &temp);

    if(!VecsetFind(graph->alphabet, symb) && symb != SPEC_EPS_VAL){
        VecsetPush(graph->alphabet, symb);
    }

    return;
}
//----------------------------------------------------------------------------------------//state* merge_parallel(state* obj1, state* obj2);

static aux_graph merge_parallel(const lex_graph* graph, aux_graph* obj1, aux_graph* obj2){

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

    NASSERT(obj1);
    NASSERT(obj2);

    add_conn(graph, obj1->accept_state, obj2->start_state, obj1->accept_state_symb);

    aux_graph new_graph = {obj1->start_state, obj2->accept_state, obj2->accept_state_symb};

    return new_graph;
}
//----------------------------------------------------------------------------------------//

static aux_graph make_repeat(const lex_graph* graph, aux_graph* obj){

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

    aux_graph left_graph  = {};
    aux_graph right_graph = {};

    if(IsValid(ast_tree->left)){
        left_graph = parse_ast(ast_tree->left, nfa_graph);
    }
    if(IsValid(ast_tree->right)){
        right_graph = parse_ast(ast_tree->right, nfa_graph);
    }

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
    uint new_state = create_state(nfa_graph);

    if(!VecsetFind(nfa_graph->alphabet, node_val)){
        if(node_val != SPEC_EPS_VAL){
            VecsetPush(nfa_graph->alphabet, node_val);
        }
    }
    aux_graph graph = {new_state, new_state, node_val};

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

    NASSERT(in_graph);
    NASSERT(state_closure);

    vec_set* closure = VecsetCtor(VECSET_INIT_CAPACITY);

    for(uint n_sub_state = 0; n_sub_state < n_substates; n_sub_state++){

        uint sub_state_id = VecsetGet(state_closure, n_sub_state);

        state sub_state = {};
        VectorGet(in_graph->states, sub_state_id - 1, &sub_state);

        uint n_conns = VectorSize(sub_state.conns);

        for(uint n_conn = 0; n_conn < n_conns; n_conn++){
            
            conn cur_conn = {};
            VectorGet(sub_state.conns, n_conn, &cur_conn);

            if(cur_conn.symb == symb){
                if(!VecsetFind(closure, cur_conn.next_state)){
                    get_eps_closure(closure, in_graph, cur_conn.next_state);
                }
            }
        }
    }

    return closure;
}
//----------------------------------------------------------------------------------------//

// TODO: optimisation required
static void handle_state(const lex_graph* in_graph, const lex_graph* out_graph, const uint n_state){
    
    NASSERT(in_graph);
    NASSERT(out_graph);

    uint n_symbs = VecsetSize(in_graph->alphabet);

    vec_set state_closure = {};
    VectorGet(states_package, n_state - 1, &state_closure);
    
    uint n_substates    = VecsetSize(&state_closure);
    for(uint n_symb = 0; n_symb < n_symbs; n_symb++){

        uint symb_val         = VecsetGet(in_graph->alphabet, n_symb);
        vec_set* symb_closure = get_move_closure(in_graph, &state_closure, n_substates, symb_val);

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

static void dump_package_states(){

    DLOG(INFO, "package dump");
    uint n_closures = VectorSize(states_package);

    for(uint n_closure = 0; n_closure < n_closures; n_closure++){
        printf("%u: ", n_closure);

        vec_set cur_closure = {};
        VectorGet(states_package, n_closure, &cur_closure);
        VecsetPrint(&cur_closure);
    }

    return;
}
//----------------------------------------------------------------------------------------//

static void mark_accept_states(const lex_graph* graph, const uint accept_state_id, const vec_set* accept_state_meta_data){

    NASSERT(graph);

    uint n_closures           = VectorSize(states_package);
    uint input_meta_data_size = VecsetSize(accept_state_meta_data);

    for(uint n_closure = 0; n_closure < n_closures; n_closure++){

        vec_set cur_closure = {};
        VectorGet(states_package, n_closure, &cur_closure);

        if(VecsetFind(&cur_closure, accept_state_id)){

            uint n_state = n_closure + 1;

            vec_set* cur_state_meta_data = NULL;

            if(VecsetFind(graph->accept_states, n_state)){
                cur_state_meta_data = VectorGet(graph->accept_states_meta_data, n_state);

                for(uint n_data_block = 0; n_data_block < input_meta_data_size; n_data_block++){
                    void* data_block = VecsetGet(accept_state_meta_data, n_data_block);

                    VecsetPush(cur_state_meta_data, data_block);
                }
            }
            else{
                VecsetPush(graph->accept_states, &n_state);

                cur_state_meta_data = VecsetCtor(input_meta_data_size);

                for(uint n_data_block = 0; n_data_block < input_meta_data_size; n_data_block++){
                    void* data_block = VecsetGet(accept_state_meta_data, n_data_block);

                    VecsetPush(cur_state_meta_data, data_block);
                }

                assert(VectorSize(graph->accept_states_meta_data) == VectorSize(graph->accept_states));
                VectorPush(graph->accept_states_meta_data, cur_state_meta_data);
                free(cur_state_meta_data);
            }
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//
