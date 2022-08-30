#ifndef MY_STRING_H
#define MY_STRING_H

struct string{

    char*  data;
    size_t size;
    size_t capacity;
};

const uint INCREASE_RATIO = 2;
const uint DEFAULT_SIZE   = 32;

string* StringCtor(const char* buf, const size_t size);
string* StringCtor(const size_t size);
string* StringCtor();
string* StringCtor(const char* buf, ...);

void    StringPush(const string* to_string, const string* src_string);
void    StringPush(string* obj, const char* buf, const size_t size);
void    StringPush(string* obj, const char* buf);
void    StringPush(const string* to_string, const string* src_string);
void    StringPush(const string* obj, const char* buf, ...);

void    StringDtor(string* obj);

inline uint  StringLen(const string* obj){
    return obj->size;
}

#endif // MY_STRING_H
