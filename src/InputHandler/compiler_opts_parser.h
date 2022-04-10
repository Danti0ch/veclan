/**
 * @file input_handler.h
 * @brief файл, который обрабатывает строку компиляции и сохраняет опции компиляции в структуру compile_options
 * если пользователь не указатель имя файла для компиляциии, то выбирается дефолтное
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef COMP_OPTS
#define COMP_OPTS

#include <logger.h>

const uint MAX_FILE_NAME_LEN = 1 << 8;

// TODO: transfer the file expansion to config file (vecl)
const char* default_file_name[MAX_FILE_NAME_LEN] = "main.vecl";

compiler_options* FillCompilerOpts(const int argc, const char* argv[]);

#endif  // INPUT_HANLER_H
