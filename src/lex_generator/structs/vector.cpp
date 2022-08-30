#include "vector.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//----------------------LOCAL-FUNCTIONS-DECLARATION-----------------------//

static void	change_capacity(struct vector *vt, size_t new_capacity);

//----------------------PUBLIC-FUNCTIONS-DEFINITIONS----------------------//

// TODO: рефактор + прикрутить логирование

struct vector *VectorNew(size_t elems, size_t elem_size){

	assert(elem_size != 0);

	struct vector *obj = (struct vector *)calloc(1, sizeof(struct vector));

	if(elems == 0){
		obj->data = calloc(BASE_CAPACITY, elem_size);
		obj->capacity  = BASE_CAPACITY;
	}
	else{
		obj->data = calloc(elems, elem_size);
		obj->capacity  = elems;
	}
	
	obj->size 	   = 0;

	obj->elem_size = elem_size;
	
	return obj;
}
//_______________________________________________________________________________________________

void VectorPush(struct vector *v, void const *elem){

	if(v->size >= v->capacity){
		change_capacity(v, v->capacity << INCREASE_RATIO);
	}

	memcpy((char*)v->data + v->size * v->elem_size, elem, v->elem_size);

	++(v->size);

	return;
}
//_______________________________________________________________________________________________

void VectorPop(struct vector *v, void *elem){

	if(v->size == 0 || v->capacity == 0) return;

	memcpy(elem, (char*)v->data + (v->size - 1) * v->elem_size, v->elem_size);

	--(v->size);
 	return;		
}
//_______________________________________________________________________________________________

int VectorEmpty(struct vector const *st){

	return st->size == 0;
}
//_______________________________________________________________________________________________

struct vector *VectorDelete(struct vector *v){

	if(v == NULL) return v;

	free(v->data);
	free(v);

	return NULL;
}
//_______________________________________________________________________________________________

void VectorPrint(struct vector const *v, void (*pf)(void const *data))
{
    if (v->size == 0)
    {
        printf("[]\n");
        return;
    }

    printf("[");

    for (int num_elem = 0; num_elem != v->size - 1; ++num_elem)
    {
        pf((void *)((char*)v->data + num_elem * v->elem_size));

        printf(", ");
    }
    
    pf((void *)((char*)v->data + (v->size - 1) * v->elem_size));

    printf("]\n");

    return;
}
//_______________________________________________________________________________________________

void VectorSet(struct vector *v, size_t index, void const *elem){

	if(index >= v->size) return;
	memcpy((char*)v->data + index * v->elem_size, elem, v->elem_size);

	return;
}
//_______________________________________________________________________________________________

void VectorGet(struct vector const *v, size_t index, void *elem){

	if(index >= v->size) return;
	memcpy(elem, (char*)v->data + index * v->elem_size, v->elem_size);

	return;
}
//_______________________________________________________________________________________________

void VectorResize(struct vector *v, size_t new_size){

	if(v->capacity < new_size){
		change_capacity(v, new_size);
	}

	v->size = new_size;
	return;
}
//_______________________________________________________________________________________________

size_t VectorSize(struct vector const *v){

	return v->size;
}
//_______________________________________________________________________________________________

vector* VectorGenerateDuplicate(const vector* v){

	assert(v != NULL);

	vector* new_obj = VectorNew(v->size, v->elem_size);
	memcpy(new_obj->data, v->data, v->size);

	return new_obj;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

static void	change_capacity(struct vector *vt, size_t new_capacity){

	void* new_mem_pointer = realloc(vt->data, new_capacity * vt->elem_size);

	if(new_mem_pointer == NULL) return;

	vt->capacity = new_capacity;
	vt->data	 = new_mem_pointer;
	
	return;
}
//_______________________________________________________________________________________________
