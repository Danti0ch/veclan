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

const char FLAG_PREFIX_VALUE    = '-';
const uint MAX_FLAG_NAME_LEN    = 1 << 8;
const uint FLAGS_NUM            = 1;
const uint MAX_FILE_NAME_LEN    = 1 << 8;

enum FLAG_ID{
    ASSIGN_NAME,    // like -o main

};

struct gvl_flag{

    char name[MAX_FLAG_NAME_LEN];
    FLAG_ID id;
};

gvl_flag gvl_flags[FLAGS_NUM] = {
    {"o", ASSIGN_VALUE}
};

/**
 * @brief general struct for containing state and metadata about current compiling
 *        тут будут храниться ключи компиляции, метаданные о файле, стек ошибок,
 */
struct gvl_unit{

    char input_file_name[MAX_FILE_NAME_LEN];
    char path_to_logs[MAX_FILE_NAME_LEN];

    char flags_set[FLAGS_NUM];
    CDUMP_OPTION logging_mode;
};

#endif  // COMPILER_UNIT_H  