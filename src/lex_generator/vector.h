#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

struct vector{

	void* data;

	size_t elem_size;
	size_t size;
	size_t capacity;
};

/**
 * Создать новый вектор, который будет содержать elems элементов размера elem_size. 
 * Элементы не инициализированы.
 */
struct vector *VectorNew(size_t elems, size_t elem_size);

/**
 * Добавить ещё один элемент elem к вектору v. Функция должна вернуть 0 при успехе и 1 при неуспехе любого рода. 
 * Амортизированная сложность этой операции должна быть O(1). 
 * После успешного исполнения данной операции размер вектора должен увеличиться на единицу.
 */
void VectorPush(struct vector *v, void const *elem);

/**
 * Убрать из вектора v последний элемент, если он существует, и положить его значение по адресу elem. 
 * Функция должна вернуть 0 при успехе и 1 при неуспехе любого рода. 
 * Амортизированная сложность этой операции должна быть O(1).
 */
void VectorPop (struct vector *v, void *elem);

/**
 * Функция-предикат. Она должна вернуть логическую истину (1), если вектор пуст и логический ноль (0) в противном случае.
 */
int VectorEmpty(struct vector const *st);

/**
 * Удалить объект v и вернуть NULL.
 */
struct vector *VectorDelete(struct vector *v);

/**
 * Вывести на стандартный вывод содержимое вектора v. Второй аргумент — указатель на функцию, 
 * которая должна принимать указатель на одиночный элемент данных, хранимый в векторе и вывести его в соответствующем виде на стандартный вывод.
 */
void VectorPrint(struct vector const *v, void (*pf)(void const *data));

/**
 * Присвоить элементу index вектора v значение elem. Вернуть 0, если операция успешна или 1 в противном случае.
 */
void VectorSet(struct vector *v, size_t index, void const *elem);

/**
 * Присвоить elem значение элемента index вектора v. Вернуть 0, если операция успешна или 1 в противном случае.
 */
void VectorGet(struct vector const *v, size_t index, void *elem);

/**
 * Изменить размер вектора v на new_size. Значение старых элементов вектора не должны измениться. Остальные элементы остаются неинициализированными. 
 * Вернуть 0, если операция успешна или 1 в противном случае.
 */
void VectorResize(struct vector *v, size_t new_size);

vector* VectorGenerateDuplicate(const vector* v);
/**
 * Возвратить количество элементов, которым владеет вектор v.
 */
size_t VectorSize(struct vector const *v);


inline void* VectorGet(struct vector const *v, size_t index){
	if(v == NULL) 		 return NULL;
	if(index >= v->size) return NULL;

	return (char*)v->data + index * v->elem_size;
}

#endif // VECTOR_H
