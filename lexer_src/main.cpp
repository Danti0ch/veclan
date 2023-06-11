#include <stdio.h>
#include "logger.h"

#include "node.h"
#include "rec_descent.h"
#include "lex_graph.h"
#include "parser.h"

int main(const int argc, const char* argv[]){

    LogInit(".");

    if(argc < 3){
        EDLOG(OPENING_FILE, "Enter the input file name and destination folder name");
        return 0;
    }

    AssembleLexer(argv[1], argv[2], "output");
    LogClose();

    return 0;
}
