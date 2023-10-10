#ifndef SPEC_CONSTANTS_H
#define SPEC_CONSTANTS_H

// TODO: remove???
#include "text_storage.h"
#include "vector.h"
#include "string_storage.h"

enum class SPEC_SYMBOL{

    OR,
    BOND,
    REP,
    EPS
};

const char SPEC_OR_VAL      = 0;
const char SPEC_REP_VAL     = 1;
const char SPEC_BOND_VAL    = 2;
const char SPEC_EPS_VAL     = 3;

const char SPEC_OR_SYMB    = '|';
const char SPEC_REP_SYMB   = '*';

enum class OUTPUT_FILE_MODE{

    OBJECT,
    TEXT
};

#endif // SPEC_CONSTANTS_H
