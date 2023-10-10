#ifndef VEC_SET_H
#define VEC_SET_H

#include "vector.h"
#include "set.h"

struct vec_set{
    vector* vt;
    set*    st;
};

const uint VECSET_INIT_CAPACITY = 16;

vec_set*  VecsetCtor(const size_t init_capacity);
vec_set*  VecsetCtor();
void      VecsetDtor(vec_set* obj);
void      VecsetPush(vec_set* obj, const uint elem);
uint      VecsetSize(const vec_set* obj);
//static uint      VecsetSet();
uint      VecsetGet(const vec_set* obj, const uint n_elem);
int       VecsetFind(const vec_set* obj, const uint elem);
int       VecsetEmpty(const vec_set* obj);
int       VecsetCmp(const vec_set* obj1, const vec_set* obj2);
void      VecsetPrint(const vec_set* obj);
vec_set*  VecsetDuplicate(const vec_set* from);

#endif // VEC_SET_H
