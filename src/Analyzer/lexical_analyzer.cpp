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

static lex_handler_unit lh_unit = {{}, {}, 0, 0, 0};

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

// TODO: unite parse keyword, separ, oper functions(cringe)
static void extract_lexem(gvl_unit* gvl);
static PARSE_RES parse_ident();
static PARSE_RES parse_digit();
static PARSE_RES parse_keyword();
static PARSE_RES parse_operator();
static PARSE_RES parse_separator();
static PARSE_RES parse_lang_ident(const LEXEM_TYPE type);

inline int check_ident_symb(char symb){
    if(isalpha(symb) || isdigit(symb) || symb == '_') return 1;

    return 0;
}
//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

void FillLexemArr(gvl_unit* gvl){
    
    assert(gvl != NULL);
    CLOG(INFO, "Attempt to extract lexems");

    const text_storage* text_data = gvl->text_data;

    uint n_lines = text_data->n_lines;

    for(uint n_line = 0; n_line < n_lines; n_line++){

        word* p_words = text_data->p_lines[n_line].p_words;
        uint n_words = text_data->p_lines[n_line].n_words;

        for(uint n_word = 0; n_word < n_words; n_word++){

            lh_unit.cur_symb    = 0;
            lh_unit.data        = p_words[n_word];

            extract_lexem(gvl);

            memset(lh_unit.cur_lexem.ident, 0, MAX_LEXEM_STR_SIZE);
            lh_unit.cur_word++;
        }
        lh_unit.cur_line++;
        lh_unit.cur_lexem.n_col  = 0;
        lh_unit.cur_lexem.n_line++;
    }

    CLOG(INFO, "Succesful extracting of lexems");
    return;
}

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

static void extract_lexem(gvl_unit* gvl){

    if(lh_unit.data.len > MAX_LEXEM_STR_SIZE){
        CLOG(WARNING, "UNDEFINIED: %s", lh_unit.data.pt);
        return;
    }

    while(lh_unit.cur_symb < lh_unit.data.len){
        if(parse_operator()       != PARSE_RES::FAILED){
            ;
        }
        else if(parse_separator() != PARSE_RES::FAILED){
            ;
        }
        else if(parse_digit()     != PARSE_RES::FAILED){
            ;
        }
        else if(parse_keyword()   != PARSE_RES::FAILED){
            ;
        }
        else if(parse_ident()     != PARSE_RES::FAILED){
            ;
        }
        else{
            CLOG(WARNING, "UNDEFINIED: %s", lh_unit.data.pt);
            break;
        }

        PushLexem(gvl, &(lh_unit.cur_lexem));
    }

    return;
}
//----------------------------------------------------------------------------------------//

static PARSE_RES parse_ident(){

    uint cur_symb = lh_unit.cur_symb;

    if(!isalpha(lh_unit.data.pt[cur_symb])) return PARSE_RES::FAILED;

    lh_unit.cur_lexem.type = LEXEM_TYPE::IDENT;

    for(; cur_symb < lh_unit.data.len; cur_symb++){
        if(check_ident_symb(lh_unit.data.pt[cur_symb]) == 0) break;
    }

    // TODO: hash mb??
    strncpy(lh_unit.cur_lexem.ident, lh_unit.data.pt + lh_unit.cur_symb, cur_symb - lh_unit.cur_symb);

    lh_unit.cur_symb = cur_symb;

    CLOG(INFO, "IDENT: %s", lh_unit.cur_lexem.ident);

    return PARSE_RES::OK;
}
//----------------------------------------------------------------------------------------//

static PARSE_RES parse_digit(){

    uint cur_symb = lh_unit.cur_symb;

    if(!isdigit(lh_unit.data.pt[cur_symb]) && lh_unit.data.pt[cur_symb] != '-')    return PARSE_RES::FAILED;

    lh_unit.cur_lexem.type = LEXEM_TYPE::DIGIT_VALUE;

    cur_symb++;

    for(; cur_symb < lh_unit.data.len; cur_symb++){
        if(!isdigit(lh_unit.data.pt[cur_symb])) break;
    }

    char save_symb = lh_unit.data.pt[cur_symb];
    lh_unit.data.pt[cur_symb] = 0;

    int64_t val = atol(lh_unit.data.pt + lh_unit.cur_symb);
    lh_unit.data.pt[cur_symb] = save_symb;
    
    lh_unit.cur_lexem.digit = val;
    lh_unit.cur_symb = cur_symb;

    CLOG(INFO, "DIGIT: %ld", val);
    return PARSE_RES::OK;
}
//----------------------------------------------------------------------------------------//

static PARSE_RES parse_operator(){
    
    PARSE_RES res = parse_lang_ident(LEXEM_TYPE::OPERATOR);
    return res;
}
//----------------------------------------------------------------------------------------//

static PARSE_RES parse_separator(){
    
    PARSE_RES res = parse_lang_ident(LEXEM_TYPE::SEPARATOR);
    return res;
}
//----------------------------------------------------------------------------------------//

static PARSE_RES parse_keyword(){
    
    PARSE_RES res = parse_lang_ident(LEXEM_TYPE::KEYWORD);
    return res;
}
//----------------------------------------------------------------------------------------//

static PARSE_RES parse_lang_ident(const LEXEM_TYPE type){

    const char*  p_str  = lh_unit.data.pt + lh_unit.cur_symb;
    const size_t len    = lh_unit.data.len;

    for(uint n_ident = 0; n_ident < N_STATEMENTS; n_ident++){

        if(STATEMENT_DATA[n_ident].type != type) continue;
        
        // TODO: !!!!!!!!!!!!!!!!!!!! FIX TOO SLOW STRLEN
        size_t ident_len = strlen(STATEMENT_DATA[n_ident].str);

        if(len < ident_len) continue;

        if(strncmp(p_str, STATEMENT_DATA[n_ident].str, ident_len) == 0){
            lh_unit.cur_symb += ident_len;
            
            lh_unit.cur_lexem.type  = type;
            lh_unit.cur_lexem.id    = STATEMENT_DATA[n_ident].id;

            if(type == LEXEM_TYPE::KEYWORD){
                CLOG(INFO, "KEYWORD: %s", STATEMENT_DATA[n_ident].str);
            }
            else if(type == LEXEM_TYPE::OPERATOR){
                CLOG(INFO, "OPERATOR: %s", STATEMENT_DATA[n_ident].str);
            }
            else if(type == LEXEM_TYPE::SEPARATOR){
                CLOG(INFO, "SEPARATOR: %s", STATEMENT_DATA[n_ident].str);
            }

            return PARSE_RES::OK;
        }
    }

    return PARSE_RES::FAILED;
}
//----------------------------------------------------------------------------------------//
