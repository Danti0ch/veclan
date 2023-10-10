#include "set.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

const uint INCREASE_RATIO = 2;

void increase_capacity(struct set* obj);

enum ret_codes{
	OK,
	FAILED
};

// optimisation byte -> bit
struct set *set_new(size_t capacity){
	
	struct set *obj = (struct set*) calloc(1, sizeof(struct set));

	obj->bt_fld = (char*)calloc(capacity, 1);
	obj->size = 0;
	obj->capacity = capacity;

	return obj;
}
//_______________________________________________________________________________________________

int set_insert(struct set *s, size_t elem){
	
	if(elem >= s->capacity){
        while(elem >= s->capacity){
            increase_capacity(s);
        }
    }

	if(*(s->bt_fld + elem) == 0) s->size++;
	
	*(s->bt_fld + elem) = 1;
	return OK;
}
//_______________________________________________________________________________________________

int set_erase(struct set *s, size_t elem){
	
	if(elem >= s->capacity) return FAILED;
	if(*(s->bt_fld + elem) == 1) s->size--;
	
	*(s->bt_fld + elem) = 0;
	return OK;
}
//_______________________________________________________________________________________________

int set_test(struct set const *s, size_t elem){
	if(elem >= s->capacity) return 0;

	return *(s->bt_fld + elem) == 1;
}
//_______________________________________________________________________________________________

struct set *set_delete(struct set *s){

	free(s->bt_fld);
	free(s);

	return NULL;
}
//_______________________________________________________________________________________________

int set_empty(struct set const *s){
	return s->size != 0;
}
//_______________________________________________________________________________________________

// optimisation try
size_t set_findfirst(struct set const *s, size_t start){

	if(start >= s->capacity) return -1;

	char* last_byte = s->bt_fld + s->capacity;
	size_t n_elem = start;
	
	for(char* p = s->bt_fld + start; p < last_byte; p++, n_elem++){
		if(*p == 1) return n_elem;
	}

	return -1;
}
//_______________________________________________________________________________________________

size_t set_size(struct set const *s){
	return s->size;
}
//_______________________________________________________________________________________________

void set_print(struct set const *s){
	if(s->size == 0){
		printf("[]\n");
		return;
	}

	printf("[");

	char* last_byte = s->bt_fld + s->capacity;
	size_t n_elem = 0;
	size_t size   = s->size;

	for(char* p = s->bt_fld; p < last_byte && size != 0; p++, n_elem++){
		if(*p == 1 && size != 1){
			printf("%lu, ", n_elem);
			size--;
		}
		else if(*p == 1){
			printf("%lu]\n", n_elem);
			size--;
		}
	}

	return;
}

//_______________________________________________________________________________________________

void increase_capacity(struct set* obj){

    obj->bt_fld = (char*)realloc(obj->bt_fld, INCREASE_RATIO * obj->capacity);
	memset(obj->bt_fld + obj->capacity, 0, obj->capacity * INCREASE_RATIO - obj->capacity);
    
	if(obj->bt_fld == NULL){
        assert(0);
    }

    obj->capacity *= INCREASE_RATIO;

    return;
}
//----------------------------------------------------------------------------------------//


// TODO: test speed
int set_cmp(set* s1, set* s2){

	assert(s1 != NULL);
	assert(s2 != NULL);

	if(s1->size != s2->size) return 1;
	//if(s1->capacity != s2->capacity) return 1;

	// TODO: OPTIMIZE
	uint n_elems = s1->capacity;

	for(uint n_elem = 0; n_elem < n_elems; n_elem++){
		if(s1->bt_fld[n_elem] != s2->bt_fld[n_elem]){
			return 1;
		}
	}

	return 0;
}
//----------------------------------------------------------------------------------------//

void set_clear(struct set *s) {
	
	memset(s->bt_fld, 0, s->capacity);
}
//----------------------------------------------------------------------------------------//
