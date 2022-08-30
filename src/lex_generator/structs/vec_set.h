#ifndef VEC_SET_H
#define VEC_SET_H

#include "vector.h"
#include "set.h"

struct vec_set{
    vector* vt;
    set*    st;

    size_t elem_size;
    size_t 
    void  (*get_data_to_set_func)();
};

vec_set*  VecsetCtor(const size_t init_capacity);
void      VecsetDtor(vec_set* obj);
void      VecsetPush(vec_set* obj, const uint elem);
uint      VecsetSize(const vec_set* obj);
//static uint      VecsetSet();
uint      VecsetGet(const vec_set* obj, const uint n_elem);
int       VecsetFind(const vec_set* obj, const uint elem);
int       VecsetEmpty(const vec_set* obj);
int       VecsetCmp(const vec_set* obj1, const vec_set* obj2);
void      VecsetPrint(const vec_set* obj);

#endif // VEC_SET_H
