/**
 * @file com
 * @brief файл, который обрабатывает строку компиляции и сохраняет опции компиляции в структуру compile_options
 * если пользователь не указатель имя файла для компиляциии, то выбирается дефолтное
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include "../compiler_unit.h"

void ReadText(gvl_unit* gvl);
void FillCompilerOpts(gvl_unit* gvl, const int argc, const char* argv[]);

#endif  // INPUT_HANLER_H
