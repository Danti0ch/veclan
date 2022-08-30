#include "string_storage.h"
#include "logger.h"
#include "string.h"

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

    obj->size     = size;
    obj->capacity = size;

    return obj;
}
//----------------------------------------------------------------------------------------//

string* StringCtor(){

    string* obj = (string*)calloc(1, sizeof(string));

    obj->data   = (char*)calloc(DEFAULT_SIZE, sizeof(char));

    obj->size     = DEFAULT_SIZE;
    obj->capacity = DEFAULT_SIZE;

    return obj;
}
//----------------------------------------------------------------------------------------//

string* StringCtor(const char* buf, ...){

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

void StringPush(const string* obj, const char* buf, ...){

    NASSERT(obj);
    NASSERT(buf);

    va_list args;
	va_start(args, buf);

    string* tmp_string = StringCtor(DEFAULT_SIZE);

    int record_to_tmp_successful = 0;
    while(!record_to_tmp_successful){

        // TODO: what if ("%c", 0) vuln occures?
        int n_written_symbs = vsnprintf(tmp_string->data, tmp_string->capacity, buf, args);

        if(n_written_symbs > 0){
            record_to_tmp_successful = 1;
        }
        else{
            increase_capacity(tmp_string);
        }
    }
    va_end(args);

    StringPush(to_string, tmp_string);
    StringDtor(tmp_string);

    return;
}
//----------------------------------------------------------------------------------------//

void StringPush(const string* to_string, const string* src_string){

    NASSERT(to_string);
    NASSERT(src_string);

    StringPush(to_string, src_string->buf, src_string->size);

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

    obj->data = realloc(obj->data, obj->capacity * INCREASE_RATIO);
    NASSERT(!ISNULL(obj->data));

    obj->capacity *= INCREASE_RATIO;
    memset(obj->data + obj->size, 0, obj->capacity - obj->size);

    return;
}
//----------------------------------------------------------------------------------------//
