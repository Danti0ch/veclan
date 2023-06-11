#include "qute_lexer.h"
#include <stdio.h>
#include <string>
#include <inttypes.h>

void check_for_standart_space(uint64_t data, uint64_t subdata){
    if(data == (uint64_t)LEXER_TAGS::l_standart_spaces) {
        printf("[!] found standart space: ");
        if(subdata == (uint64_t)LEXER_SUBTAGS::l_ded_ring_space) {
            printf("ded_ring_space\n");
        }
        if(subdata == (uint64_t)LEXER_SUBTAGS::l_fract_space) {
            printf("fract_space\n");
        }
        if(subdata == (uint64_t)LEXER_SUBTAGS::l_integer_space) {
            printf("integer space\n");
        }
        if(subdata == (uint64_t)LEXER_SUBTAGS::l_rational_space) {
            printf("rational space\n");
        }
    }
}

int main() {

    char buff[] = "if(some_value == 42) {"
                    "   v1 in R;"
                    "   v2 in Z4;"
                    "   print(v1, v2);"
                    "}";
    
    size_t buff_len             = sizeof(buff) / sizeof(char);
    char* p_buff                = buff;
    unsigned int buff_offset    = 0;
    unsigned long long data     = 0;
    unsigned long long subdata  = 0;
    
    while(p_buff < buff + buff_len) {

        LEXER_RET_CODE res = parse_lexem(p_buff, &buff_offset, &data, &subdata);
        if(res == LEXER_RET_CODE::FAILED_PARSING) {
            printf("parsing has failed\n");
            return 0;
        }
        check_for_standart_space(data, subdata);

        printf("data = %lu, subdata = %lu\n", data, subdata);
        p_buff += buff_offset;
        while(isspace(*p_buff) || *p_buff == '\0') p_buff++;
    }

    return 0;
}
