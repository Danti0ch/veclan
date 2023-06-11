/**
 * @file lexical_analyzer.cpp
 * @brief this file includes methods of the lexical analyzing stage
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../compiler_unit.h"
#include "../logger.h"
#include "analyzer.h"
#include <assert.h>
#include <stdio.h>
#include <ctype.h>
#include "qute_lexer.h"

static lex_handler_unit lh_unit = {{}, {}, 0, 0, 0};

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

// TODO: unite parse keyword, separ, oper functions(cringe)
inline int check_ident_symb(char symb){
    if(isalpha(symb) || isdigit(symb) || symb == '_') return 1;

    return 0;
}
//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

inline int isspace(char symb){

    if(symb == ' ' || symb == '\t' || symb == '\n' || symb == 0) return 1;
    return 0;
}
//----------------------------------------------------------------------------------------//

void FillLexemArr(gvl_unit* gvl){
    
    assert(gvl != NULL);
    CLOG(INFO, "Attempt to extract lexems");
    
    char* buff = gvl->text_data->data; 

    size_t text_size = gvl->text_data->size;
    uint offset = 0;
    uint cur_offset = 0;
    unsigned long long tag = 0, subtag = 0;
    uint n_line = 0, n_col = 0;
    uint line_offset = 0;

    while(offset < text_size) {

        LEXER_RET_CODE res = parse_lexem(buff + offset, &cur_offset, &tag, &subtag);

        if(res == LEXER_RET_CODE::OK) {
            lexem new_lexem = {
                .tag = (uint)tag, .subtag = (uint)subtag,
                .str_bufpos = buff + offset, .str_buflen = cur_offset,
                .n_line = n_line, .n_col = line_offset
            };

            VectorPush(gvl->lexems, &new_lexem);

            offset += cur_offset;
            line_offset += cur_offset;

            // skipping spaces
            while(offset < text_size && isspace(buff[offset])){

                if(buff[offset] == '\n'){
                    n_line++;
                    line_offset = 0;
                }
                offset++;
            }
        }
        else {
            printf("%.*s %u %u %u\n", 5, buff + offset, n_line, line_offset, offset);
            assert(0); // todo:
        }
    }
    
    CLOG(INFO, "Succesful extracting of lexems");
    return;
}
//----------------------------------------------------------------------------------------//
