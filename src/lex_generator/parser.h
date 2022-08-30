
#ifndef PARSER_H
#define PARSER_H

#include "text_storage.h"
#include "vector.h"
#include "string_storage.h"


enum class SPECIAL_MARK{

    BODY,
    TOKEN,
    NAME_TABLE,
    TABLES_INSERT,
    END
    UNKNOWN
};

struct token_block{

    string* RE;
    string* protocol;
};

struct table_block{
    string* name;
    vector* data;
    uint    max_elem_len;
};

struct lexer_data{

    text_storage*   text_data;
    string*         text_buffer;
    //uint            body_pos;
    
    vector*        tables_storage;
    vector*        tokens_storage;

    uint            body_mark_found;
    string*         text_before_body;
    string*         text_after_body;
};

void AssembleLexer(const char* input_file_name, OUTPUT_FILE_MODE mode);
void GetLexerData(lexer_data* data_storage);
void GenerateLexerFile(lexer_data* data_storage);

#endif // PARSER_H
