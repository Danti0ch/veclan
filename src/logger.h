/**
 * @file logger.h
 * @brief реализация методы для логирования ошибок, варнингов компиляции этой программы и логирования ошибок, варнингов компилируемой пользовательской программы
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef LOGGER_H
#define LOGGER_H


enum ERROR_CODE{

    OK,
    ALLOC_MEM,
    CREATING_FILE,
    OPENING_FILE,
    EMPTY_INPUT_FILE,
    READ_BUFFER,
    
};

enum COMP_STAGE{

    INPUT_HANDLER,
    LEXER,
    PARSER,
    CODE_GEN,
    ASM
};

enum class CDUMP_OPTION{

    CONSOLE,
    FILE,
    BOTH    
};

struct log_location{

    char    file_name[1 << 8];
    char    func_name[1 << 8];
    uint    n_line;
};

enum DLOG_TYPE{
    INFO,
    WARNING,
};

// for debugging errors
struct derr{

    ERROR_CODE num_of_val;
    err_loc    location;
};

const int  MAX_LOG_NAME_LEN  = 2 << 8;
const char LOG_LOCATION[32]  = "../logs/";  // TODO: make config for customise this option
const int  MAX_LOG_STR_LEN   = 2 << 10;

// https://habr.com/ru/post/138150/
#define DLOG   dlog_wrapper({__FILE__, __FUNCTION__, __LINE__})
#define EDLOG edlog_wrapper({__FILE__, __FUNCTION__, __LINE__})

#ifndef DLOG_MODE
#define DLOG_MODE 0/**
					 * DLOG_MODE = CDUMP_OPTION::CONSOLE, - debug logging only to console
                     * DLOG_MODE = CDUMP_OPTION::FILE,    - debug logging only to file     
                     * DLOG_MODE = CDUMP_OPTION::BOTH,    - debug logging to file and console
					 */
#endif

#if DLOG_MODE == 0 || DLOG_MODE == 2
    #define DLOG_TO_CONSOLE_ENABLED 1
#else
    #define DLOG_TO_CONSOLE_ENABLED 0
#endif

#if DLOG_MODE == 1 || DLOG_MODE == 2
    #define DLOG_TO_FILE_ENABLED 1
#else
    #define DLOG_TO_FILE_ENABLED 0
#endif

#define TERM_RESET   	  "\033[0m"
#define ERROR_FONT        "\033[1;31m"
#define WARNING_FONT  	  "\033[1;33m"
#define INFO_FONT	      "\033[1;37m"
#define TERM_GREEN_FONT   "\033[1;32m"
#define INVALID_LOG_FONT  "\033[1;34m"

void DebugLog(DLOG_TYPE type, const char* string, err_loc location);

#endif  // LOGGER_H
