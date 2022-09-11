#ifndef LEX_GRAPH
#define LEX_GRAPH

#include "logger.h"
#include "vector.h"
#include "node.h"
#include "set.h"
#include "vec_set.h"

/**
 * @brief алгоритм преобразования NFA->DFA, минимазация DFA находится в книге 
 *        "Basics of Compiler Design" by Torben Mogensen, издание 20.08.2010. Разделы 2.6, 2.8
 * 
 */

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

/**
 * @brief преобразовывает содержимое AST дерева в структуру lex_graph, которая будет иметь вид NFA графа
 * 
 * @param ast_tree исходный обьект типа Node, который нужно преобразовать
 * @param accept_state_meta_data метаданные, которые будут храниться в конечной вершине NFA графа(например ID токена, если ast_tree было создано на основе регулярного выражения токена)
 * @return lex_graph* NFA граф, получившийся из AST дерева
 */
lex_graph*  ConvertTreeToNFA(const Node* ast_tree, const uint accept_state_meta_data);

/**
 * @brief генерация DFA графа на основе NFA графа. Алгоритм см в начале файла
 */
lex_graph*  ConvertNFAtoDFA(const lex_graph* nfa_graph);

/**
 * @brief минимазация DFA графа. Источник алгоритма см выше
 */
// void        MinimizeDFA(const lex_graph* dfa_graph);

/**
 * @brief добавляет все данные из graph2 в graph1. Увеличивает значения state'ов graph2 в graph1 на количество state'ов graph1. Удаляет graph2.
 * 
 */
void MergeGraphsParallel(lex_graph* graph1, lex_graph* graph2);

/**
 * @brief создаёт графическое представление графа с помощью graphviz'a. Генерируется png картинка с именем file_name
 * 
 * @param graph 
 * @param file_name 
 */
void        DumpLexGraph(const lex_graph* graph, const char* file_name);
void        TextDumpLexGraph(const lex_graph* obj);

const char CODE_SEPARATOR[]            = "\n";
const char BUF_POINTER_IN_CODE_NAME[]  = "p_buf";
const char BUF_COUNTER_IN_CODE_NAME[]  = "n_symb";
const char BUF_INIT_POS_IN_CODE_NAME[] = "n_init_pos";
const char BUF_COUNTER_LIMIT_NAME[]    = "max_n_symbs";

#endif // LEX_GRAPH
