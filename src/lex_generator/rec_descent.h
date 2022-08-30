#ifndef LEX_NODE_H
#define LEX_NODE_H

#include "logger.h"
#include "text_storage.h"
#include "node.h"

struct input_handler{

    text_storage* storage;

    uint    ln;
    uint    col;
    uint    n_symb;
    uint    n_symbs;
};

Node* CreateAST(const char* input_file_name);

void Print_Func(FILE* output_file, uint cur_n_node, const Node* val);

#endif // LEX_NODE_H
