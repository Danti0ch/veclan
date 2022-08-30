#include <stdio.h>

int GetTokens(void){

    $BODY$
}

char keywords[][25] = {
    "if", "else", "other"
};

$TABLE$

слово_без_пробелов = { "слово", "слово", "слово" }
keywords = {
    "if", "else", "other"
}
$END$

$TOKEN$

value = "[0-9] [0-9]* | \"hui\" | 0-9] [0-9]*.[0-9] [0-9]*",

    "float cur_val = get_val(buf, cur_pos);
        
    PushLexem(VALUE, \" hui\");
    lexem* cur_lexem = GetLastLexem();
    cur_lexem->val = cur_val;

    return;
    "
$END$

$TOKEN$

ident = "[a-zA-Z]+", "return;"

$END$

void sum(int a, int b){
    return a + b;
}

float get_val(){
    return 0;
}
