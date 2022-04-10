#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "support.h"

typedef unsigned int uint;

// TODO: implement vector.h to reduce get_file_len method and make vector of strings for text_storage
/// максимальная длина строки для чтения из файла
const int MAX_INPUT_LINE_LEN  = 1000;

/// максимальная длина строки для чтения из файла
const int MAX_INPUT_FILE_SIZE = 10000;

struct string{
    char *pointer;       ///< указатель на начало строки
    uint len;          ///< длина строки (strlen)
};

struct text_storage{ /// структура, необходимая для хранения группы строк
    uint   len_buf;       ///< количество символов в буфере
    uint   n_lines;     ///< количество строк

    string *p_lines;      ///< массив строк типа string
    char   *buffer;         ///< буфер, в котором находится содержимое всех строк. каждая строка должна оканчиваться '\0'
};

const int P_AFTER_CALLOC = 0xDEADBEAF;

/**
 * считывает содержимое файла file_name в структуру storage
 * 
 * \param file_name имя файла
 * \param storage структура, в которую нужно считать содержимое
 * 
 * \return код возвращаемого значения из func_codes
 */
void ReadInputFile(text_storage *storage);

#endif // INPUT_HANDLER_H
