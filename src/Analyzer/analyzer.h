#ifndef ANALYZER_H
#define ANALYZER_H

#include "../Structs/text_storage.h"
#include "../compiler_unit.h"

/**
 * @brief штука, необходимая для посимвольной обработки текста из структуры text_storage
 * 
 */
struct lex_handler_unit{

    word    data;
    lexem   cur_lexem;

    uint    cur_line;
    uint    cur_word;
    uint    cur_symb;
};

const size_t MAX_OPERATOR_STR_SIZE  = 8;

enum class PARSE_RES{
    OK,
    FAILED
};


struct ast_handler{
    gvl_unit*   gvl;
    uint        cur_lexem;
};

void FillLexemArr(gvl_unit* gvl);
void InitAnalyze(gvl_unit* gvl);

void GenerateAST(gvl_unit* gvl);

#endif //ANALYZER_H
