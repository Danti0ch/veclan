#ifndef LEX_NODE_H
#define LEX_NODE_H

#include "logger.h"
#include "text_storage.h"
#include "node.h"
#include "string.h"

struct input_handler{

    text_storage* storage;

    uint    ln;
    uint    col;
    uint    n_symb;
    uint    n_symbs;
};

//! buffer will be cleaned
Node* CreateAST(char* buffer, size_t size);

#endif // LEX_NODE_H
