#include "vec_set.h"
#include "logger.h"
#include "stdio.h"

vec_set* VecsetCtor(const size_t init_capacity){

    if(init_capacity == 0) return NULL;

    vec_set* new_obj = (vec_set*)calloc(1, sizeof(vec_set));

    new_obj->vt = VectorNew(init_capacity, sizeof(uint));
    new_obj->st = set_new(init_capacity);

    return new_obj;
}
//----------------------------------------------------------------------------------------//

vec_set* VecsetCtor(){

    vec_set* new_obj = (vec_set*)calloc(1, sizeof(vec_set));

    new_obj->vt = VectorNew(VECSET_INIT_CAPACITY, sizeof(uint));
    new_obj->st = set_new(VECSET_INIT_CAPACITY);

    return new_obj;
}
//----------------------------------------------------------------------------------------//

void VecsetDtor(vec_set* obj){

    if(obj == NULL) return;

    VectorDelete(obj->vt);
    set_delete(obj->st);

    free(obj);

    return;
}
//----------------------------------------------------------------------------------------//    

// TODO: could be error
void VecsetPush(vec_set* obj, const uint elem){

    NASSERT(obj);
    if(!set_test(obj->st, elem)){
        VectorPush(obj->vt, &elem);
        set_insert(obj->st, elem);
    }
    
    return;
}
//----------------------------------------------------------------------------------------//

uint VecsetSize(const vec_set* obj){

    NASSERT(obj);

    assert(obj->vt->size == obj->st->size);
    return obj->vt->size;
}
//----------------------------------------------------------------------------------------//

int VecsetFind(const vec_set* obj, const uint elem){

    NASSERT(obj);

    return set_test(obj->st, elem);
}
//----------------------------------------------------------------------------------------//

int VecsetEmpty(const vec_set* obj){

    NASSERT(obj);

    return obj->vt->size == 0;
}
//----------------------------------------------------------------------------------------//

// TODO: sse for optimisation
// TODO: set cmp REQUIRED
int VecsetCmp(const vec_set* obj1, const vec_set* obj2){

    NASSERT(obj1);
    NASSERT(obj2);

    if(obj1->vt->size != obj2->vt->size) return 1;

    uint n_elems = obj1->vt->size;

    for(uint n_elem = 0; n_elem < n_elems; n_elem++){
        uint val1 = 0, val2 = 0;

        VectorGet(obj1->vt, n_elem, &val1);
        VectorGet(obj2->vt, n_elem, &val2);
        
        if(val1 != val2) return 1;
    }

    return 0;
}
//----------------------------------------------------------------------------------------//

uint VecsetGet(const vec_set* obj, const uint n_elem){

    NASSERT(obj);

    uint elem = 0;
    VectorGet(obj->vt, n_elem, &elem);

    return elem;
}
//----------------------------------------------------------------------------------------//

void VecsetPrint(const vec_set* obj){
    
    NASSERT(obj);

    uint n_elems = VectorSize(obj->vt);

    printf("VEC_SET PRINT<%p>\n", obj);
    for(uint n_elem = 0; n_elem < n_elems; n_elem++){
        uint elem = 0;

        VectorGet(obj->vt, n_elem, &elem);

        printf("%u ", elem);
    }

    printf("\n");
    return;
}
//----------------------------------------------------------------------------------------//
