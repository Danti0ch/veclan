#include "qute_lexer.h"
#include <stdio.h>
#include <string>

int main() {

    char buff[] = "if(is_visited == 0) {"
                    "   func();"
                    "}";
    
    size_t buff_len                 = sizeof(buff) / sizeof(char);
    char* p_buff                    = buff;
    unsigned int buff_offset        = 0;
    unsigned long long int data     = 0;
    unsigned long long int subdata  = 0;
    
    while(p_buff < buff + buff_len) {

        LEXER_RET_CODE res = parse_lexem(p_buff, &buff_offset, &data, &subdata);
        if(res == LEXER_RET_CODE::FAILED_PARSING) {
            printf("parsing has failed\n");
            return 0;
        }
        
        printf("data = %lu, subdata = %lu\n", data, subdata);
        p_buff += buff_offset;
        while(isspace(*p_buff) || *p_buff == '\0') p_buff++;
    }

    return 0;
}
