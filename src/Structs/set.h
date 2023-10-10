#ifndef SET_H
#define SET_H

#include <stdlib.h>

struct set{

	char* bt_fld;

	size_t size;
	size_t capacity;
};

//Создать новое пустое множество, значения элементов которого могут лежать в границах от 0 до capacity-1 включительно. Вернуть указатель на него.
struct set *set_new(size_t capacity);

//Добавить во множество s элемент elem. Если элемент существовал, множество не изменится. Вернуть 0, если операция корректна, т.е. elem < capacity, иначе вернуть 1.
int set_insert(struct set *s, size_t elem);

//Удалить элемент из множества. Если элемент не существовал, множество не изменится. Вернуть 0, если операция корректна, т.е. elem < capacity, иначе вернуть 1.
int set_erase(struct set *s, size_t elem);

//Вернуть 1, если элемент присутствует в множестве и 0 в противном случае.
int set_test(struct set const *s, size_t elem);

//Удалить объект множество и вернуть NULL
struct set *set_delete(struct set *s);

//Предикат: вернуть единицу, если в множестве есть хотя бы один элемент и ноль в противном случае.
int set_empty(struct set const *s);

//Вернуть наименьший из элементов множества, не меньших start. Если таких элементов нет (например, множество пустое), то вернуть -1.
size_t set_findfirst(struct set const *s, size_t start);

//Вернуть количество элементов множества.
size_t set_size(struct set const *s);

//Вывести на стандартный вывод содержимое множества в формате по образцу: []\n или [1, 2, 3]\n.
void set_print(struct set const *s);

int set_cmp(set* s1, set* s2);
#endif // SET_H
