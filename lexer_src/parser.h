
#ifndef PARSER_H
#define PARSER_H

#include "text_storage.h"
#include "vector.h"
#include "string_storage.h"


/*
    временно сделаем большой enum, где будем указывать название последнего тега
    пример ниже будет иметь такой enum:

    enum Res{
        sub11,
        sub22,
        sub2
    };
    todo:
    временно утвердим, что вложенныетеги должны быть уникальными
*/

// todo: create a strategy for handling more than 1 lexer errors

struct lexer_data{

    vector* nfas;
    vector* tags;
    vector* subtags;
};

//?
// TODO: return err_code -> return tag_code for optimizing
void AssembleLexer(const char* input_file_name, const char* output_file_name, const char* output_folder_name);
// void GetLexerData(lexer_data* data_storage);
// void GenerateLexerFile(lexer_data* data_storage);

const char PARSING_BUFF_VAR_NAME[]          = "buff";
const char OK_RET_CODE_NAME[]               = "OK";
const char FAILED_PARSING_RET_CODE_NAME[]   = "FAILED_PARSING";

#endif // PARSER_H
