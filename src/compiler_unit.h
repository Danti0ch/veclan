/**
 * @file compiler_unit.h
 * @brief this file will contain description of the compiler_unit_struc, that will allow to contain the current compiler state, list of errors and etp
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef COMPILER_UNIT_H
#define COMPILER_UNIT_H

#include "Structs/stack.h"
#include "Structs/vector.h"
#include "Structs/text_storage.h"
#include "Structs/hash_table.h"
#include "Structs/node.h"
#include "statement_data.h"
#include <stdlib.h>

const char FLAG_PREFIX_VALUE    = '-';
const uint MAX_FLAG_NAME_LEN    = 0x100;
const uint FLAGS_NUM            = 1;

// TODO: test
const uint MAX_FILE_NAME_LEN    = 256;

const uint INIT_STACK_ERRORS_SIZE = 0x8;
const uint INIT_LEXEM_ARRAY_SIZE  = 0x200;

const char DEFAULT_PATH_TO_LOGS[] = "logs/";

enum FLAG_ID{
    ASSIGN_NAME,    // like -o main

};

struct gvl_flag{

    char name[MAX_FLAG_NAME_LEN];
    FLAG_ID id;
};

typedef unsigned int uint;

const uint MAX_N_EXEC_AREAS = 32;

struct ast_tree{

    Node*  exec_area[MAX_N_EXEC_AREAS];
    uint  n_areas;
};

/**
 * @brief general struct for containing state and metadata about current compiling
 *        тут будут храниться ключи компиляции, метаданные о файле, стек ошибок, имена лексем
 */
struct gvl_unit{

    vector* lexems;
    ast_tree*   ast;
    string* text_data;

    HTable* name_table;

    char input_file_name[MAX_FILE_NAME_LEN];
    char path_to_logs[MAX_FILE_NAME_LEN];

    char flags_set[FLAGS_NUM];
    stack_t* errors;
};

gvl_unit* GvlUnitConstructor();
void GvlUnitDestructor(gvl_unit* obj);
void GvlDump(const gvl_unit* obj);

// void PushLexem(gvl_unit* obj, const lexem* lex);

#endif  // COMPILER_UNIT_H  
