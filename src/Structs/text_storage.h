/**
 * \file
 * \brief файл содержит структуру для работы с группой строк, ее методы
 */

#ifndef TEXT_STORAGE_H
#define TEXT_STORAGE_H

#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "string_storage.h"

/// хранит указатель на си строку и её длину
struct word{
    char  *pt;       ///< указатель на слово
    uint   pos;      ///< позиция слова в буфере
    size_t len;          ///< длина слова (strlen)
};

struct line_storage{

    word*   p_words;
    char*   p_line;
    uint    pos;
    size_t  n_words;
    size_t  len;
};

struct text_storage{ /// структура, необходимая для хранения группы строк
    size_t len_buf;       ///< количество символов в буфере
    size_t n_lines;     ///< количество строк
    size_t n_words;     ///< количество слов

    line_storage* p_lines;      ///< массив структур, в которых хранится информация о строках
    word*         p_words;      ///< массив слова типа string
    char          *buffer;         ///< буфер, в котором находится содержимое всех сдлв. каждое слово должна оканчиваться '\0'
};

// TODO: -> log.h
enum err_code{ 
    R,
    MEM_ALLOC_ERROR,
    EMPTY_FILE,
};

const uint MAX_N_WORDS_IN_LINE  = 10000;
/**
 * @brief считываем содержимое файла в структуру text_storage
 * 
 * @param file_name имя файла
 * @return text_storage* 
 */
text_storage* GetStorage(const char *file_name);
text_storage* GetStorage(const char *buffer, const size_t buf_size);
text_storage* GetStorage(const text_storage* src_storage);

/**
 * записывает в файл output_file строки из структуры storage, в порядке массива p_lines
 * 
 * \param output_file файл, в который нужно произвести запись
 * \param storage структура text_storage
 * 
 * \return код возвращаемого значения из func_codes
 */
//              ERR_CODE WriteStorage(FILE *output_file, const text_storage *storage);

/**
 * записывает в файл output_file символьный массив(буфер) из storage
 * 
 * \param output_file файл, в который будет происходить запись
 * \param storage структура text_storage, буфер которой нужно записать в файл
 * 
 * \return код возвращаемого значения из func_codes
 */
err_code WriteBufferOfStorage(FILE *output_file, const text_storage *storage);

/**
 * функция очищает память, которая была динамически присвоена элементам storage в create_mem_storage
 * 
 * \param storage структура text_storage, память которой нужно очистить
 * 
 * \return код возвращаемого значения из func_codes
 */ 
err_code TextStorageRemove(text_storage *storage);

// TODO: sописание
void MakeUniqueData(text_storage* storage);

void WriteWords(const text_storage* storage, const char* file_name);

/**
 * получает количество строк и символов файла
 * 
 * \param file_name имя файла, размер которого нужно узнать
 * \param n_lines указатель на переменную, куда нужно записать количество строк в файле
 * \param len указатель на переменную, куда нужно записать количество символов в файле
 * 
 * \return код ошибки или успеха
 */
err_code GetFileMeta(const char *file_name, size_t *n_lines, size_t *len, size_t* n_words);

string* GenerateBuffer(const char* file_name);

inline uint GetNWords(const text_storage* storage){
    return storage->n_words;
}

inline word* GetWord(const text_storage* storage, const uint n_word){
    if(n_word >= storage->n_words) return NULL;
    return storage->p_words + n_word;
}

inline size_t GetStorageBufSize(const text_storage* storage){
    return storage->len_buf;
}

inline const char* GetWordText(const text_storage* storage, const uint n_word){
    if(n_word >= storage->n_words) return NULL;
    return storage->p_words[n_word].pt;
}
size_t GetFileSize(const char* file_name);
#endif //TEXT_STORAGE_H
