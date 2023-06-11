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

const char SPEC_OR_VAL      = (char)SPEC_SYMBOL::OR;
const char SPEC_REP_VAL     = (char)SPEC_SYMBOL::REP;
const char SPEC_BOND_VAL    = (char)SPEC_SYMBOL::BOND;
const char SPEC_EPS_VAL     = (char)SPEC_SYMBOL::EPS;

const char SPEC_OR_SYMB    = '|';
const char SPEC_REP_SYMB   = '*';

enum class OUTPUT_FILE_MODE{

    OBJECT,
    TEXT
};

#endif // SPEC_CONSTANTS_H
