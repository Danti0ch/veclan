# veclan


Опишу грамматику языка через регулярные выражения:
```
[abcd] - lexem
SMTH   - rule
{a}*   - repeat a (0 or more times)
a | b  - execute a or b
{a}+   - repeat a (1 or more times)

PROG	   := FUNC_DEF | ASSIGN [end_of_file]

FUNC_DEF   := [func_prefix] [ident] [bracket_r_l] {[ident] [arg_separator]}* [bracket_r_r] BODY
BODY       := [bracket_s_l] {IDENT | KEYWORD}* [bracket_s_r]

KEYWORD  := {[ret] RVALUE [end_of_operation]} | 
            {[while] [bracket_r_l] LOGIC [bracket_r_r] BODY} |
            {[if]    [bracket_r_l] LOGIC [bracket_r_r] BODY} | 
            {[if]    [bracket_r_l] LOGIC [bracket_r_r] BODY [else] BODY} |
            {[if]    [bracket_r_l] LOGIC [bracket_r_r] BODY}

IDENT	        := FUNCTION_CALL | ASSIGN [end_of_operation]
FUNCTION_CALL   := [ident] [bracket_r_l] {[ident]}* [bracket_r_r]
ASSIGN          := LVALUE [assign] RVALUE
LVALUE          := [ident]
RVALUE          := ARIFM1 {[add] | [sub] ARIFM1}*

ARIFM1        := ARIFM2 {[mul] | [div] ARIFM2}*
ARIFM2        := ARIFM3 {[pow] ARIFM3}*
ARIFM3        := ARIFM4 | [bracket_r_l] RVALUE [bracket_r_r]
ARIFM4        := LVALUE | [constant]

LOGIC      := LOGIC2 {[equal] | [above] | [s_above] | [under] | [s_under] LOGIC2}*
LOGIC2     := LOGIC3 {[or] LOGIC3}*
LOGIC3     := RVALUE {[and] G_RVALUE}*
```
