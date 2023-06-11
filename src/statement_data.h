#ifndef STATEMENT_DATA_H
#define STATEMENT_DATA_H

#include <string.h>
#include <stdlib.h>

typedef unsigned int uint;

const uint MAX_LEXEM_NAME_LEN = 32;
const size_t MAX_LEXEM_STR_SIZE     = 64;

struct lexem{

    uint tag;
    uint subtag;
    const char* str_bufpos;
    size_t str_buflen;
    uint n_line, n_col;
};

// const char* get_statement_name(STATEMENT_ID id);
// void        get_type_name(LEXEM_TYPE type, char* str);

#endif //STATEMENT_DATA_H
