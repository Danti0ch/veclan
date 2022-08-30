#ifndef STATEMENT_DATA_H
#define STATEMENT_DATA_H

#include <string.h>
#include <stdlib.h>

typedef unsigned int uint;

enum class LEXEM_TYPE{
    UNDEFINIED,
    KEYWORD,
    SEPARATOR,
    IDENT,
    OPERATOR,
    DIGIT_VALUE,
};

enum class STATEMENT_ID{

    VOID,

    SCOPE_OPEN,
    SCOPE_CLOSE,
    EXPR_CLOSE,
    LINEAR_SHELL_OPEN,
    LINEAR_SHELL_CLOSE,
    IDENT_SEPARATOR,
    END_OF_FILE,
    R_BRACKET_OPEN,
    R_BRACKET_CLOSE,

    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    POW,
    ASSIGN,
    EQUAL,

    UNDEFINIED,
    WHILE,
    AREA_DEF,
    RET,
    CALL
};

const uint MAX_LEXEM_NAME_LEN = 32;
const size_t MAX_LEXEM_STR_SIZE     = 64;

struct lexem{

    LEXEM_TYPE  type;

    STATEMENT_ID id;
    char         ident[MAX_LEXEM_STR_SIZE];
    int64_t      digit;

    uint n_line;
    uint n_col;
};

struct lang_ident_data{
    LEXEM_TYPE   type;
    STATEMENT_ID id;
    const char   str[MAX_LEXEM_STR_SIZE];
};

const lang_ident_data STATEMENT_DATA[] = 
{
    {LEXEM_TYPE::KEYWORD,               STATEMENT_ID::WHILE,            "while"},
    {LEXEM_TYPE::KEYWORD,               STATEMENT_ID::AREA_DEF,         "def"},
    {LEXEM_TYPE::KEYWORD,               STATEMENT_ID::RET,              "ret"},
    {LEXEM_TYPE::KEYWORD,               STATEMENT_ID::CALL,             "call"},

    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::ADDITION,         "+"},
    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::SUBTRACTION,      "-"},
    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::MULTIPLICATION,   "*"},
    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::DIVISION,         "/"},
    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::POW,              "^"},
    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::ASSIGN,           "="},
    {LEXEM_TYPE::OPERATOR,              STATEMENT_ID::EQUAL,            "@@"},

    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::SCOPE_OPEN,           "{"},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::SCOPE_CLOSE,          "}"},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::EXPR_CLOSE,           ";"},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::LINEAR_SHELL_OPEN,    "<"},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::LINEAR_SHELL_CLOSE,   ">"},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::IDENT_SEPARATOR,      ","},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::R_BRACKET_OPEN,       "("},
    {LEXEM_TYPE::SEPARATOR,             STATEMENT_ID::R_BRACKET_CLOSE,      ")"},
};


const size_t N_STATEMENTS = sizeof(STATEMENT_DATA) / sizeof(lang_ident_data);

const char* get_statement_name(STATEMENT_ID id);
void        get_type_name(LEXEM_TYPE type, char* str);

#endif //STATEMENT_DATA_H
