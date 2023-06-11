#include "qute_lexer.h"

LEXER_RET_CODE parse_lexem(char* buff, unsigned int* offset, unsigned long long int* data, unsigned long long int* subdata) {
unsigned int loc_offset = 0;
state0:
switch(buff[loc_offset++]){
case 'n':
{
state1:
switch(buff[loc_offset++]){
case 'n':
{
state80:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
state140:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state82:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
state83:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state84:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
state85:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
state86:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
state87:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state88:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
state89:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
state90:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state91:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state92:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
state93:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
state94:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
state95:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
state96:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
state97:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
state98:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
state99:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
state100:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
state101:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
state102:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
state103:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
state104:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
state105:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
state106:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
state107:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
state108:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
state109:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
state110:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
state111:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
state112:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
state113:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
state114:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
state115:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
state116:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
state117:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
state118:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
state119:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
state120:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
state121:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
state122:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
state123:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
state124:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
state125:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
state126:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
state127:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
state128:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
state129:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
state130:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
state131:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
state132:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
state133:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
state134:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
state135:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
state136:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
state137:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
state138:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
state139:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'u':
{
state81:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state179:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state206:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
state218:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state225:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
state231:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
state237:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state242:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 19;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
state226:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state232:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
state238:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 18;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'u':
{
state2:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
state3:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
state4:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 's':
{
state5:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
state141:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
state180:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
state207:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state219:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 17;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
state6:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
state142:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state181:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state208:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 6;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
state143:
switch(buff[loc_offset++]){
case 'n':
{
state182:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state209:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state220:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 9;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
state183:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
state210:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
state221:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state227:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
state233:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state239:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state243:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
state246:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state249:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 13;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
state7:
switch(buff[loc_offset++]){
case 'n':
{
state144:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
state184:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 40;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'u':
{
state145:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state185:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
state211:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 8;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state146:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state186:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
state212:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
state222:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state228:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
state234:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state240:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state244:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
state247:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state250:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 14;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'v':
{
state8:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state147:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
state187:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 10;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
state9:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
state148:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state188:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state213:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 1;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state189:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
state214:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 2;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
state10:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'd':
{
state11:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state149:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
state190:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 4;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state150:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state191:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state215:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
state223:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state229:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
state235:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
state241:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state245:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state248:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
state251:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state252:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
state253:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
state254:
switch(buff[loc_offset++]){
case 'n':
{
state256:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 15;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
state255:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
state257:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state258:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 16;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'i':
{
state12:
switch(buff[loc_offset++]){
case 'n':
{
state151:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 7;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
state152:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 0;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 't':
{
state13:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
state14:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state153:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
state192:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state216:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
state224:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
state230:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state236:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 32;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
state193:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 5;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
state15:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'o':
{
state16:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
state154:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
state194:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
state217:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 12;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
state155:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 39;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
state156:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
state195:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 11;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
state17:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'j':
{
state18:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'f':
{
state19:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
state157:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
state196:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 0;
*subdata = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Q':
{
state20:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 23;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Z':
{
state21:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
state158:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
state197:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
state198:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
state199:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
state200:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
state201:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
state202:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
state203:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
state204:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
state205:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '2':
{
state159:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '3':
{
state160:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '4':
{
state161:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '5':
{
state162:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '6':
{
state163:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '7':
{
state164:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '8':
{
state165:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state197;
break;
}
case '2':
{
goto state198;
break;
}
case '3':
{
goto state199;
break;
}
case '4':
{
goto state200;
break;
}
case '5':
{
goto state201;
break;
}
case '6':
{
goto state202;
break;
}
case '7':
{
goto state203;
break;
}
case '8':
{
goto state204;
break;
}
case '9':
{
goto state204;
break;
}
case '0':
{
goto state205;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 20;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '9':
{
goto state165;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 22;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'R':
{
state22:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 1;
*subdata = 21;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '1':
{
state23:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
state24:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
state25:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
state26:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
state27:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
state28:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
state29:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
state30:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
state31:
switch(buff[loc_offset++]){
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
state166:
switch(buff[loc_offset++]){
case '1':
{
state169:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
state170:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
state171:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
state172:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
state173:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
state174:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
state175:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
state176:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
state177:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 42;
return LEXER_RET_CODE::OK;
}
}
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '.':
{
goto state166;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '<':
{
state32:
switch(buff[loc_offset++]){
case '=':
{
state167:
*offset = loc_offset;
*data = 2;
*subdata = 38;
return LEXER_RET_CODE::OK;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 37;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '=':
{
state33:
*offset = loc_offset;
*data = 2;
*subdata = 29;
return LEXER_RET_CODE::OK;
break;
}
case '>':
{
state34:
switch(buff[loc_offset++]){
case '=':
{
state168:
*offset = loc_offset;
*data = 2;
*subdata = 36;
return LEXER_RET_CODE::OK;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 35;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '?':
{
state35:
*offset = loc_offset;
*data = 2;
*subdata = 34;
return LEXER_RET_CODE::OK;
break;
}
case '.':
{
state36:
switch(buff[loc_offset++]){
case '1':
{
goto state169;
break;
}
case '2':
{
goto state170;
break;
}
case '3':
{
goto state171;
break;
}
case '4':
{
goto state172;
break;
}
case '5':
{
goto state173;
break;
}
case '6':
{
goto state174;
break;
}
case '7':
{
goto state175;
break;
}
case '8':
{
goto state176;
break;
}
case '9':
{
goto state176;
break;
}
case '0':
{
goto state177;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 33;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '*':
{
state37:
*offset = loc_offset;
*data = 2;
*subdata = 31;
return LEXER_RET_CODE::OK;
break;
}
case '@':
{
state38:
switch(buff[loc_offset++]){
case '@':
{
state178:
*offset = loc_offset;
*data = 2;
*subdata = 30;
return LEXER_RET_CODE::OK;
break;
}
default: { return LEXER_RET_CODE::FAILED_PARSING; }
}
break;
}
case '^':
{
state39:
*offset = loc_offset;
*data = 2;
*subdata = 28;
return LEXER_RET_CODE::OK;
break;
}
case '/':
{
state40:
*offset = loc_offset;
*data = 2;
*subdata = 27;
return LEXER_RET_CODE::OK;
break;
}
case '-':
{
state41:
switch(buff[loc_offset++]){
case 'n':
{
goto state1;
break;
}
case 'u':
{
goto state2;
break;
}
case 'l':
{
goto state3;
break;
}
case '_':
{
goto state4;
break;
}
case 's':
{
goto state5;
break;
}
case 'c':
{
goto state6;
break;
}
case 'a':
{
goto state7;
break;
}
case 'v':
{
goto state8;
break;
}
case 'e':
{
goto state9;
break;
}
case 'p':
{
goto state10;
break;
}
case 'd':
{
goto state11;
break;
}
case 'i':
{
goto state12;
break;
}
case 't':
{
goto state13;
break;
}
case 'r':
{
goto state14;
break;
}
case 'b':
{
goto state15;
break;
}
case 'o':
{
goto state16;
break;
}
case 'm':
{
goto state17;
break;
}
case 'j':
{
goto state18;
break;
}
case 'f':
{
goto state19;
break;
}
case 'Q':
{
goto state20;
break;
}
case 'Z':
{
goto state21;
break;
}
case 'R':
{
goto state22;
break;
}
case '1':
{
goto state23;
break;
}
case '2':
{
goto state24;
break;
}
case '3':
{
goto state25;
break;
}
case '4':
{
goto state26;
break;
}
case '5':
{
goto state27;
break;
}
case '6':
{
goto state28;
break;
}
case '7':
{
goto state29;
break;
}
case '8':
{
goto state30;
break;
}
case '9':
{
goto state30;
break;
}
case '0':
{
goto state31;
break;
}
case '<':
{
goto state32;
break;
}
case '=':
{
goto state33;
break;
}
case '>':
{
goto state34;
break;
}
case '?':
{
goto state35;
break;
}
case '.':
{
goto state36;
break;
}
case '*':
{
goto state37;
break;
}
case '@':
{
goto state38;
break;
}
case '^':
{
goto state39;
break;
}
case '/':
{
goto state40;
break;
}
case '-':
{
goto state41;
break;
}
case '+':
{
state42:
*offset = loc_offset;
*data = 2;
*subdata = 24;
return LEXER_RET_CODE::OK;
break;
}
case 'g':
{
state43:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'h':
{
state44:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'k':
{
state45:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'q':
{
state46:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'w':
{
state47:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'x':
{
state48:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'y':
{
state49:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'z':
{
goto state49;
break;
}
case 'A':
{
state50:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'B':
{
state51:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'C':
{
state52:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'D':
{
state53:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'E':
{
state54:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'F':
{
state55:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'G':
{
state56:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'H':
{
state57:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'I':
{
state58:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'J':
{
state59:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'K':
{
state60:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'L':
{
state61:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'M':
{
state62:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'N':
{
state63:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'O':
{
state64:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'P':
{
state65:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'S':
{
state66:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'T':
{
state67:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'U':
{
state68:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'V':
{
state69:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'W':
{
state70:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'X':
{
state71:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case 'Y':
{
state72:
switch(buff[loc_offset++]){
case 'n':
{
goto state80;
break;
}
case 'u':
{
goto state140;
break;
}
case 'l':
{
goto state82;
break;
}
case '_':
{
goto state83;
break;
}
case 's':
{
goto state84;
break;
}
case 'c':
{
goto state85;
break;
}
case 'a':
{
goto state86;
break;
}
case 'v':
{
goto state87;
break;
}
case 'e':
{
goto state88;
break;
}
case 'p':
{
goto state89;
break;
}
case 'd':
{
goto state90;
break;
}
case 'i':
{
goto state91;
break;
}
case 't':
{
goto state92;
break;
}
case 'r':
{
goto state93;
break;
}
case 'b':
{
goto state94;
break;
}
case 'o':
{
goto state95;
break;
}
case 'm':
{
goto state96;
break;
}
case 'j':
{
goto state97;
break;
}
case 'f':
{
goto state98;
break;
}
case 'Q':
{
goto state99;
break;
}
case 'Z':
{
goto state100;
break;
}
case 'R':
{
goto state101;
break;
}
case '1':
{
goto state102;
break;
}
case '2':
{
goto state103;
break;
}
case '3':
{
goto state104;
break;
}
case '4':
{
goto state105;
break;
}
case '5':
{
goto state106;
break;
}
case '6':
{
goto state107;
break;
}
case '7':
{
goto state108;
break;
}
case '8':
{
goto state109;
break;
}
case '9':
{
goto state109;
break;
}
case '0':
{
goto state110;
break;
}
case 'g':
{
goto state111;
break;
}
case 'h':
{
goto state112;
break;
}
case 'k':
{
goto state113;
break;
}
case 'q':
{
goto state114;
break;
}
case 'w':
{
goto state115;
break;
}
case 'x':
{
goto state116;
break;
}
case 'y':
{
goto state117;
break;
}
case 'z':
{
goto state117;
break;
}
case 'A':
{
goto state118;
break;
}
case 'B':
{
goto state119;
break;
}
case 'C':
{
goto state120;
break;
}
case 'D':
{
goto state121;
break;
}
case 'E':
{
goto state122;
break;
}
case 'F':
{
goto state123;
break;
}
case 'G':
{
goto state124;
break;
}
case 'H':
{
goto state125;
break;
}
case 'I':
{
goto state126;
break;
}
case 'J':
{
goto state127;
break;
}
case 'K':
{
goto state128;
break;
}
case 'L':
{
goto state129;
break;
}
case 'M':
{
goto state130;
break;
}
case 'N':
{
goto state131;
break;
}
case 'O':
{
goto state132;
break;
}
case 'P':
{
goto state133;
break;
}
case 'S':
{
goto state134;
break;
}
case 'T':
{
goto state135;
break;
}
case 'U':
{
goto state136;
break;
}
case 'V':
{
goto state137;
break;
}
case 'W':
{
goto state138;
break;
}
case 'X':
{
goto state139;
break;
}
case 'Y':
{
goto state100;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 3;
return LEXER_RET_CODE::OK;
}
}
break;
}
case ':':
{
state73:
*offset = loc_offset;
*data = 5;
*subdata = 51;
return LEXER_RET_CODE::OK;
break;
}
case ')':
{
state74:
*offset = loc_offset;
*data = 5;
*subdata = 50;
return LEXER_RET_CODE::OK;
break;
}
case '(':
{
state75:
*offset = loc_offset;
*data = 5;
*subdata = 49;
return LEXER_RET_CODE::OK;
break;
}
case ',':
{
state76:
*offset = loc_offset;
*data = 5;
*subdata = 48;
return LEXER_RET_CODE::OK;
break;
}
case ';':
{
state77:
*offset = loc_offset;
*data = 5;
*subdata = 45;
return LEXER_RET_CODE::OK;
break;
}
case '}':
{
state78:
*offset = loc_offset;
*data = 5;
*subdata = 44;
return LEXER_RET_CODE::OK;
break;
}
case '{':
{
state79:
*offset = loc_offset;
*data = 5;
*subdata = 43;
return LEXER_RET_CODE::OK;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 2;
*subdata = 25;
return LEXER_RET_CODE::OK;
}
}
break;
}
case '+':
{
goto state42;
break;
}
case 'g':
{
goto state43;
break;
}
case 'h':
{
goto state44;
break;
}
case 'k':
{
goto state45;
break;
}
case 'q':
{
goto state46;
break;
}
case 'w':
{
goto state47;
break;
}
case 'x':
{
goto state48;
break;
}
case 'y':
{
goto state49;
break;
}
case 'z':
{
goto state49;
break;
}
case 'A':
{
goto state50;
break;
}
case 'B':
{
goto state51;
break;
}
case 'C':
{
goto state52;
break;
}
case 'D':
{
goto state53;
break;
}
case 'E':
{
goto state54;
break;
}
case 'F':
{
goto state55;
break;
}
case 'G':
{
goto state56;
break;
}
case 'H':
{
goto state57;
break;
}
case 'I':
{
goto state58;
break;
}
case 'J':
{
goto state59;
break;
}
case 'K':
{
goto state60;
break;
}
case 'L':
{
goto state61;
break;
}
case 'M':
{
goto state62;
break;
}
case 'N':
{
goto state63;
break;
}
case 'O':
{
goto state64;
break;
}
case 'P':
{
goto state65;
break;
}
case 'S':
{
goto state66;
break;
}
case 'T':
{
goto state67;
break;
}
case 'U':
{
goto state68;
break;
}
case 'V':
{
goto state69;
break;
}
case 'W':
{
goto state70;
break;
}
case 'X':
{
goto state71;
break;
}
case 'Y':
{
goto state72;
break;
}
case ':':
{
goto state73;
break;
}
case ')':
{
goto state74;
break;
}
case '(':
{
goto state75;
break;
}
case ',':
{
goto state76;
break;
}
case ';':
{
goto state77;
break;
}
case '}':
{
goto state78;
break;
}
case '{':
{
goto state79;
break;
}
default: { 
*offset = loc_offset - 1;
*data = 4;
*subdata = 41;
return LEXER_RET_CODE::OK;
}
}
return LEXER_RET_CODE::FAILED_PARSING;
}
