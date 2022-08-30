#include "stack.h"
#include "logger.h"
#include <assert.h>
#include <string.h>

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

// TODO: rename stack -> obj
// TODO: reduce capacity + increase -> change capacity

static void increase_capacity(stack_t *stack);
static void reduce_capacity(stack_t *stack);
static void get_init_mem(stack_t *stack, size_t init_capacity);

#if PROTECTION_LVL2
	static uint32_t get_hash(const stack_t* stack);
	inline size_t stack_n_bytes_for_hash(const stack_t *stack);
	inline size_t data_n_bytes_for_hash(const stack_t *stack);
#endif

static ST_ERROR_CODE stack_error(const stack_t *stack);
static void dump_stack_data(const stack_t *stack);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

stack_t* _StackConstructor(size_t init_capacity, size_t elem_size, STACK_LOC_PARAMS){

	assert(init_capacity != 0);

    stack_t* obj = (stack_t*)calloc(1, sizeof(stack_t));
    CHECKALLOC(obj)

	#if PROTECTION_LVL1
		obj->canary_left  = VALID_CANARY_VALUE;
		obj->canary_right = VALID_CANARY_VALUE;
	#endif

	obj->capacity = init_capacity;
	obj->size = 0;
	obj->data = NULL;
    obj->elem_size = elem_size;

	get_init_mem(obj, init_capacity);

    // ? remove mb
	LOC_PARAMS_TO_STACK(obj)

	#if PROTECTION_LVL2
		stack->hash_value = get_hash(obj);
	#endif

	STACK_VERIFY(obj)

    return obj;
}
//----------------------------------------------------------------------------------------//

void _StackDestructor(stack_t *stack, STACK_LOC_PARAMS){

    // ?
	LOC_PARAMS_TO_STACK(stack)

	STACK_VERIFY(stack)

	free(stack->begin_data);
	free(stack);

	/*
	stack->data                  = POISONS::DATA_AFTER_DESTRUCTOR;
	stack->begin_data			 = (char*)POISONS::DATA_AFTER_DESTRUCTOR;

	#if PROTECTION_LVL1
		stack->canary_left       = (CANARY)POISONS::STACK_CANARY_AFTER_DESTRUCTOR;
		stack->canary_right      = (CANARY)POISONS::STACK_CANARY_AFTER_DESTRUCTOR;
		stack->data_canary_left  = (CANARY*)POISONS::DATA_CANARY_AFTER_DESTRUCTOR;
		stack->data_canary_right = (CANARY*)POISONS::DATA_CANARY_AFTER_DESTRUCTOR;
	#endif

	stack->capacity = 0;
	stack->size     = 0;
	stack->
	#if PROTECTION_LVL2
		stack->hash_value = 0;
	#endif
	*/

	return;
}
//----------------------------------------------------------------------------------------//

#include <stdio.h>
void _StackPush(stack_t *obj, STACK_LOC_PARAMS, const void* new_elem){

    // ?
	LOC_PARAMS_TO_STACK(obj)

	STACK_VERIFY(obj);

	if(obj->size + 1 >= obj->capacity){
		increase_capacity(obj);
	}

	memcpy((char*)obj->data + obj->size * obj->elem_size, new_elem, obj->elem_size);
	obj->size++;
	
	#if PROTECTION_LVL2
		obj->hash_value = get_hash(obj);
	#endif

	STACK_VERIFY(obj)
    return;
}
//----------------------------------------------------------------------------------------//

void _StackPop(stack_t *stack, STACK_LOC_PARAMS){
	
	LOC_PARAMS_TO_STACK(stack)

	STACK_VERIFY(stack);

    if(stack->size == 0) EDLOG(OWN, "attempt to pop stack with size 0");

	if(REDUCE_CAPACITY_RATIO * (stack->size) < stack->capacity){
        reduce_capacity(stack);
	}
	else{
		;//stack->data[stack->size - 1] = POISON_ELEM;
	}

	stack->size--;

	#if PROTECTION_LVL2
		stack->hash_value = get_hash(stack);
	#endif

	STACK_VERIFY(stack)
    return;
}
//----------------------------------------------------------------------------------------//

void* _StackTop(stack_t* stack, STACK_LOC_PARAMS){

	LOC_PARAMS_TO_STACK(stack)

	STACK_VERIFY(stack);

    if(stack->size == 0) EDLOG(OWN, "attempt to pop stack with size 0");

	// assert(upper_elem != POISON_ELEM);

    return (char*)stack->data + (stack->size - 1) * stack->elem_size;
;
}
//----------------------------------------------------------------------------------------//

size_t GetStackSize(stack_t* stack){

	assert(stack != NULL);

	return stack->size;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

static void increase_capacity(stack_t *stack){

	STACK_VERIFY(stack);
		
	stack->capacity *= INCREASE_CAPACITY_RATIO;
	
	#if PROTECTION_LVL1
		char *p_new_memory = (char*)realloc(stack->begin_data, stack->capacity * stack->elem_size + 2 * sizeof(CANARY));
		CHECKALLOC(p_new_memory)

		stack->begin_data        = p_new_memory; 
		stack->data_canary_left  = (CANARY*)(p_new_memory);
		stack->data              = (char*)p_new_memory + sizeof(CANARY);
		stack->data_canary_right = (CANARY*)(p_new_memory + stack->capacity * stack->elem_size + sizeof(CANARY));

		*(stack->data_canary_left)  = VALID_CANARY_VALUE;
		*(stack->data_canary_right) = VALID_CANARY_VALUE;

	#else
		char *p_new_memory = (char*)realloc(stack->begin_data, stack->capacity * stack->elem_size);		
        CHECKALLOC(p_new_memory)
		
		stack->begin_data = p_new_memory;
		stack->data = p_new_memory;
		
	#endif // PROTECTION_LVL1

	/*
	for(int i = stack->size; i < stack->capacity; i++){
		stack->data[i] = POISON_ELEM;
	}
	*/

	p_new_memory = NULL;

	// или так, или не верифицировать в конце
	#if PROTECTION_LVL2
		stack->hash_value = get_hash(stack);
	#endif

	STACK_VERIFY(stack)
    return;
}
//----------------------------------------------------------------------------------------//

static void reduce_capacity(stack_t *stack){
	
	STACK_VERIFY(stack);

	stack->capacity /= REDUCE_CAPACITY_RATIO;

	#if PROTECTION_LVL1
		char *p_new_memory = (char*)realloc(stack->begin_data, stack->capacity * stack->elem_size + 2 * sizeof(CANARY));
		
		CHECKALLOC(p_new_memory)

		stack->begin_data 		  = p_new_memory;
		stack->data_canary_left   = (CANARY*)(p_new_memory);
		stack->data 			  = (char*)p_new_memory + sizeof(CANARY);
		stack->data_canary_right  = (CANARY*)(p_new_memory + stack->capacity * stack->elem_size + sizeof(CANARY));
		
		*(stack->data_canary_left)  = VALID_CANARY_VALUE;
		*(stack->data_canary_right) = VALID_CANARY_VALUE;
	
	#else
		char *p_new_memory = (char*)realloc(stack->begin_data, stack->capacity * stack->elem_size);
		
		CHECKALLOC(p_new_memory)

		stack->begin_data = p_new_memory;
		stack->data = p_new_memory;

	#endif // PROTECTION_LVL1

	p_new_memory = NULL;

	// или так, или не верифицировать в конце
	#if PROTECTION_LVL2
		stack->hash_value = get_hash(stack);
	#endif
	
	STACK_VERIFY(stack)
    return;
}
//----------------------------------------------------------------------------------------//

static void get_init_mem(stack_t *stack, size_t init_capacity){

	assert(stack != NULL);

	#if PROTECTION_LVL1
		char *p_new_memory = (char*)calloc(init_capacity * stack->elem_size + 2 * sizeof(CANARY), sizeof(char));
		CHECKALLOC(p_new_memory)

		stack->begin_data           = p_new_memory;
		stack->data_canary_left     = (CANARY*)(p_new_memory);
		stack->data                 = (char*)p_new_memory + sizeof(CANARY);
		stack->data_canary_right    = (CANARY*)(p_new_memory + init_capacity * stack->elem_size + sizeof(CANARY));

		*(stack->data_canary_left)  = VALID_CANARY_VALUE;
		*(stack->data_canary_right) = VALID_CANARY_VALUE;

	#else
		char *p_new_memory = (char*)calloc(init_capacity * stack->elem_size, sizeof(char));
		CHECKALLOC(p_new_memory)
		
		stack->begin_data = p_new_memory;
		stack->data 	  = p_new_memory;
		
	#endif // PROTECTION_LVL1
	/*
	for(int i = 0; i < stack->capacity; i++){
		stack->data[i] = POISON_ELEM;
	}
	*/
	return;
}
//----------------------------------------------------------------------------------------//

#if PROTECTION_LVL2

// https://ru.wikipedia.org/wiki/Adler-32
static uint32_t get_hash(const stack_t *stack) {
	
	const char *buffer_stack = (const char*)stack;

	uint32_t s1 = 1;
	uint32_t s2 = 0;

	size_t buflength_stack = stack_n_bytes_for_hash(stack);

	for (size_t n = 0; n < buflength_stack; n++) {
		s1 = (s1 + buffer_stack[n]) % 65521;
		s2 = (s2 + s1) % 65521;
	}

	buffer_stack = (const char*)stack->begin_data;

	size_t buflength_data = data_n_bytes_for_hash(stack);

	for (size_t n = 0; n < buflength_data; n++) {
		s1 = (s1 + buffer_stack[n]) % 65521;
		s2 = (s2 + s1) % 65521;
	}

	return (s2 << 16) | s1;
}
//----------------------------------------------------------------------------------------//

inline size_t stack_n_bytes_for_hash(const stack_t *stack){
	return (char*)(&stack->hash_value) - (char*)(stack);
}

inline size_t data_n_bytes_for_hash(const stack_t *stack){
	return (char*)(stack->data_canary_right) + sizeof(CANARY) - (char*)(stack->data_canary_left);
}

#endif // PROTECTION_LVL2

static ST_ERROR_CODE stack_error(const stack_t *stack){

	assert(stack != NULL);

	#if PROTECTION_LVL1

		if(stack->canary_left  != VALID_CANARY_VALUE){
			return ST_ERROR_CODE::NOT_VALID_LEFT_STRUCT_CANARY;
		}

		if(stack->canary_right != VALID_CANARY_VALUE){
			return ST_ERROR_CODE::NOT_VALID_RIGHT_STRUCT_CANARY;
		}

	#endif

	if(stack->data == NULL || stack->begin_data == NULL){
		return ST_ERROR_CODE::DATA_IS_NULL;
	}
/*
	if(stack->data       == (TYPE_STACK*)POISONS::DATA_AFTER_DESTRUCTOR || 
	   stack->begin_data == (char*)POISONS::DATA_AFTER_DESTRUCTOR){

		return ST_ERROR_CODE::STACK_WAS_DESTR;
	}
*/
	if(stack->capacity < stack->size){
		return ST_ERROR_CODE::NOT_VALID_CAPACITY;
	}

	#if PROTECTION_LVL1

		if(*(stack->data_canary_left) != VALID_CANARY_VALUE){
			return ST_ERROR_CODE::NOT_VALID_LEFT_DATA_CANARY;
		}

		if(*(stack->data_canary_right) != VALID_CANARY_VALUE){
		 	return ST_ERROR_CODE::NOT_VALID_RIGHT_DATA_CANARY;
		}
	#endif
	
	#if PROTECTION_LVL2

		uint32_t valid_hash_value = get_hash(stack);

		if(stack->hash_value != valid_hash_value){
			return ST_ERROR_CODE::NOT_VALID_HASH_VALUE;
		}

	#endif

	return ST_ERROR_CODE::OK;
}
//----------------------------------------------------------------------------------------//


void stack_dump(const stack_t *stack, const int err_code, const int n_line, const char *file_name, const char* func_name,
				const char* date, const char* time){

	assert(stack != NULL);

    MDLOG( "===========STACK VERIFICATION===============");
	MDLOG( "[#]\tLIBRARY FUNCTION: %s(\"%s\"(%d))\n"
			"[#]\tDATE: %s | %s\n"
		    "stack_t %s(%s) from function \"%s\"(file %s(%d))\n"
			"adress = [%x]\n\n",
			func_name, file_name, n_line,
			date, time,
			stack->location_info.stack_name, err_code == (int)ERROR_CODE::OK ? "ok" : "ERROR", stack->location_info.init_func_name, stack->location_info.init_file_name,
			stack->location_info.init_n_line, 
			stack);

	if(err_code != (int)ST_ERROR_CODE::OK) return;

	MDLOG(				"name               | value         | adress      \n"
						"___________________|_______________|_____________\n"
					#if PROTECTION_LVL1
						"canary_left        | %-14llx| [%d]\n"
						"canary_right       | %-14llx| [%d]\n"de.o ldescent.o -o durex
					#endif
						
						"size               | %-14d| [%d]\n"
						"capacity           | %-14d| [%d]\n"
						"elem_size 		    | %-14lu| [%d]\n"
					#if PROTECTION_LVL2
						"hash_value         | %-14lx| [%d]\n"
					#endif
					
					#if PROTECTION_LVL1
						"data_canary_left   | %-14llx| [%d]\n"
						"data_canary_right  | %-14llx| [%d]\n"
					#endif
					
					"\ndata[%x]\n"
					"{\n",
					#if PROTECTION_LVL1
						stack->canary_left, &(stack->canary_left),
						stack->canary_right, &(stack->canary_right),
					#endif
					
						stack->size, &(stack->size),
						stack->capacity, &(stack->capacity),
						stack->elem_size, &(stack->elem_size),

					#if PROTECTION_LVL2
						stack->hash_value, &(stack->hash_value),
					#endif
					
					#if PROTECTION_LVL1
		 				*(stack->data_canary_left), stack->data_canary_left,
						*(stack->data_canary_right), stack->data_canary_right,
					#endif
			   		
			   		stack->data);

	//dump_stack_data(stack);
	MDLOG("}\n"
		   "________________________________________________\n\n");
	return;
}
//----------------------------------------------------------------------------------------//

// TODO: ???
/*
static void dump_stack_data(const stack_t *stack){

	assert(stack != NULL);

	#ifdef SHOW_POISONS
		size_t n_to_show = stack->capacity;
	#else
		size_t n_to_show = stack->size;
	#endif

	for(int data_counter = 0; data_counter < n_to_show; data_counter++){
		MDLOG("*[%5d] = " TYPE_STACK_specif "\n", data_counter, stack->data[data_counter]);
	}

	return;
}
//----------------------------------------------------------------------------------------//
*/
