#include "statement_data.h"

const char* get_statement_name(STATEMENT_ID id){

    for(uint n_st = 0; n_st < N_STATEMENTS; n_st++){
        if(STATEMENT_DATA[n_st].id == id){
            return STATEMENT_DATA[n_st].str;
        }
    }

    return NULL;
}
//----------------------------------------------------------------------------------------//

void get_type_name(LEXEM_TYPE type, char* str){

    if(type == LEXEM_TYPE::KEYWORD){
        strcpy(str, "keyword");
    }
    else if(type == LEXEM_TYPE::SEPARATOR){
        strcpy(str, "separator");
    }
    else if(type == LEXEM_TYPE::IDENT){
        strcpy(str, "identifier");
    }
    else if(type == LEXEM_TYPE::OPERATOR){
        strcpy(str, "operator");
    }
    else if(type == LEXEM_TYPE::DIGIT_VALUE){
        strcpy(str, "digit");
    }
    else if(type == LEXEM_TYPE::UNDEFINIED){
        strcpy(str, "undefinied");
    }
    return;
}
//----------------------------------------------------------------------------------------//
