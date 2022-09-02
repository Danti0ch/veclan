#ifndef LEX_GRAPH
#define LEX_GRAPH

#include "logger.h"
#include "vector.h"
#include "node.h"
#include "set.h"
#include "vec_set.h"

//TODO: rename lex_graph -> ???
struct state{
    vector* conns;
    uint    id;
};

struct conn{
    uint   next_state;
    char   symb;
};

/*
struct accept_state_meta{

    vec_set* data;
};
*/

struct lex_graph{

    vec_set*  alphabet;
    vector*   states;
    vec_set*  accept_states;

    // TODO: maybe other way to contain that data? hash_table or smth
    vector*   accept_states_meta_data;
    uint      start_state;
};

struct aux_graph{
    uint    start_state;
    uint    accept_state;
    //state* dead_state;

    char    accept_state_symb;
};

lex_graph*  ConvertTreeToNFA(const Node* ast_tree, const uint accept_state_meta_data);
lex_graph*  ConvertNFAtoDFA(const lex_graph* nfa_graph);
void        MinimizeDFA(const lex_graph* dfa_graph);
void        MergeGraphsParallel(lex_graph* graph1, lex_graph* graph2);

lex_graph*  LexGraphInit();
void        LexGraphRemove(lex_graph* graph);
void        DumpLexGraph(const lex_graph* graph, const char* file_name);
void        TextDumpLexGraph(const lex_graph* obj);

const uint VECSET_INIT_CAPACITY = 16;

const char CODE_SEPARATOR[]            = "\n";
const char BUF_POINTER_IN_CODE_NAME[]  = "p_buf";
const char BUF_COUNTER_IN_CODE_NAME[]  = "n_symb";
const char BUF_INIT_POS_IN_CODE_NAME[] = "n_init_pos";
const char BUF_COUNTER_LIMIT_NAME[]    = "max_n_symbs";

#endif // LEX_GRAPH
