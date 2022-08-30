#include <stdio.h>
#include "logger.h"

#include "node.h"
#include "rec_descent.h"
#include "lex_graph.h"
/*

TODO: графика???
TODO: освобождение памяти, почитать про автоматическое, если нет, то реализовать при всех EDLOG
*/

// TODO: сделать полный дамп и допилить dfa

int main(const int argc, const char* argv[]){

    LogInit(".");

    if(argc == 1){
        EDLOG(OPENING_FILE, "Enter the input file name");
        return 0;
    }

    Node* ast_tree = CreateAST(argv[1]);
    DumpNode(ast_tree, &Print_Func);

    lex_graph* nfa_graph = ConvertTreeToNFA(ast_tree);
    DumpLexGraph(nfa_graph, "img1.png");

    lex_graph* dfa_graph = ConvertNFAtoDFA(nfa_graph);

    DumpLexGraph(dfa_graph, "img2.png");
    LogClose();

    return 0;
}
