#include "string_storage.h"
#include "logger.h"
#include "string.h"
#include <stdarg.h>
#include <stdio.h>

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

void increase_capacity(string* obj);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

string* StringCtor(const char* buf, const size_t size){

    NASSERT(buf);
    if(size == 0) return NULL;

    string* obj = (string*)calloc(1, sizeof(string));

    obj->data   = (char*)calloc(size, sizeof(char));
    memcpy(obj->data, buf, size);

    obj->size     = size;
    obj->capacity = size;

    return obj;
}
//----------------------------------------------------------------------------------------//

string* StringCtor(const size_t size){

    if(size == 0) return NULL;

    string* obj = (string*)calloc(1, sizeof(string));

    obj->data   = (char*)calloc(size, sizeof(char));

    obj->size     = 0;
    obj->capacity = size;

    return obj;
}
//----------------------------------------------------------------------------------------//

string* StringCtor(){

    string* obj = (string*)calloc(1, sizeof(string));

    obj->data   = (char*)calloc(DEFAULT_SIZE, sizeof(char));

    obj->size     = 0;
    obj->capacity = DEFAULT_SIZE;

    return obj;
}
//----------------------------------------------------------------------------------------//

string* StringCtorArgs(const char* buf, ...){

    NASSERT(buf);

    string* obj = StringCtor();

    va_list args;
	va_start(args, buf);

    int record_done = 0;

    while(!record_done){

        // TODO: what if ("%c", 0) vuln occures?
        int n_written_symbs = vsnprintf(obj->data, obj->capacity, buf, args);

        if(n_written_symbs > 0){
            record_done = 1;
        }
        else{
            increase_capacity(obj);
        }
    }

    va_end(args);

    return obj;
}
//----------------------------------------------------------------------------------------//

void StringPush(string* obj, const char* buf, const size_t size){

    NASSERT(buf);

    if(size == 0) return;

    while(obj->size + size >= obj->capacity){
        increase_capacity(obj);
    }

    memcpy(obj->data + obj->size, buf, size);

    obj->size += size;
    return;
}
//----------------------------------------------------------------------------------------//

void StringPush(string* obj, const char* buf){

    NASSERT(obj);
    NASSERT(buf);

    StringPush(obj, buf, strlen(buf));

    return;
}
//----------------------------------------------------------------------------------------//

void StringPushArgs(string* obj, const char* buf, ...){

    NASSERT(obj);
    NASSERT(buf);

    string* tmp_string = StringCtor(DEFAULT_SIZE);

    int record_to_tmp_successful = 0;
    while(!record_to_tmp_successful){

        va_list args;
        va_start(args, buf);

        // TODO: what if ("%c", 0) vuln occures?
        int n_written_symbs = vsnprintf(tmp_string->data, tmp_string->capacity, buf, args);

        if(n_written_symbs < tmp_string->capacity){
            record_to_tmp_successful = 1;
            tmp_string->size = strlen(tmp_string->data);
        }
        else{
            increase_capacity(tmp_string);
        }
        va_end(args);
    }

    StringPush(obj, tmp_string);

    StringDtor(tmp_string);

    return;
}
//----------------------------------------------------------------------------------------//

void StringPush(string* to_string, string* src_string){

    NASSERT(to_string);
    NASSERT(src_string);

    StringPush(to_string, src_string->data, src_string->size);

    return;
}
//----------------------------------------------------------------------------------------//

void StringDtor(string* obj){

    if(ISNULL(obj)) return;

    free(obj->data);
    free(obj);
    
    return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

void increase_capacity(string* obj){
    
    NASSERT(obj);

    obj->data = (char*)realloc(obj->data, obj->capacity * INCREASE_RATIO);
    NASSERT(!ISNULL(obj->data));

    obj->capacity *= INCREASE_RATIO;
    memset(obj->data + obj->size, 0, obj->capacity - obj->size);

    return;
}
//----------------------------------------------------------------------------------------//
