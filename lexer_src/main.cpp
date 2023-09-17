#include <stdio.h>
#include "logger.h"

#include "node.h"
#include "rec_descent.h"
#include "lex_graph.h"
#include "parser.h"

void ShowDFA(char* regexp) {
    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;

    VectorPush(metadata, &accept_state_data);
    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    lex_graph* dfa = ConvertNFAtoDFA(nfa);
    DumpLexGraph(dfa, "dfa.png");

    LexGraphRemove(dfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void ShowNFA(char* regexp) {
    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;

    VectorPush(metadata, &accept_state_data);
    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    DumpLexGraph(nfa, "nfa.png");

    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

int main(const int argc, const char* argv[]){

    LogInit(".");

    if(!strcmp(argv[1], "--reg_to_fa")) {
        
        char regexp[256] = {};
        fgets(regexp, 256, stdin);

        printf("regexp: %s\n", regexp);
        ShowNFA(regexp);
        ShowDFA(regexp);

        return 0;
    }

    if(argc < 3){
        EDLOG(OPENING_FILE, "Enter the input file name and destination folder name");
        return 0;
    }

    else 
        AssembleLexer(argv[1], argv[2], "output");
    LogClose();

    return 0;
}
