#include "logger.h"
#include <time.h>
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

static FILE* dlog_file       = NULL;
static FILE* clog_file       = NULL;

//static FILE* dlogger_stream = stdout;         // TODO: распарсить эти опции через ключи ком строки

// can i fix global struct?
static log_location DCUR_LOC = {
        "", "", 0
};

//----------------------LOCAL-FUNCTIONS-DECLARATION-----------------------//

void get_log_name(char* str);
void log_splitter(COMP_STAGE cur_stage, void* log_data){
void clog_init(CDUMP_OPTION mode);
void dlog_init();
void debug_log(DLOG_TYPE type, const char* string, err_loc location);

//----------------------PUBLIC-FUNCTIONS-DEFINITIONS----------------------//

int LogInit(CDUMP_OPTION mode, const char* path_to_clogs){

    dlog_init();
    clog_init(mode, path_to_clogs);

	return;
}
//--------------------------------------------//


void LogClose(){

	DLOG(INFO, "Logging closed");
	
    #if DLOG_TO_FILE_ENABLED
    assert(dlog_file != NULL);
    fclose(dlog_file);
    #endif  // DLOG_TO_FILE_ENABLED
	
    return;
}
//--------------------------------------------//

//----------------------LOCAL-FUNCTIONS-DEFINITIONS----------------------//

void get_log_name(char* buf, const char* log_location){

    assert(buf != NULL);

	strcpy(buf, log_location);

    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);

    strftime(buf + strlen(buf), MAX_LOG_NAME_LEN, "%H-%M-%S(%d.%m.%Y)", ptm);

    return;
}
//--------------------------------------------//


// https://habr.com/ru/post/138150/
// TODO: void should work
void* dlog_wrapper(log_location location){

    DCUR_LINE = location.n_line;
    DCUR_FILE_NAME = location.file_name;
    DCUR_FUNC_NAME = location.func_name;
    
    return &debug_log;
}
//--------------------------------------------//

void* edlog_wrapper(log_location location){

    DCUR_LINE = location.n_line;
    DCUR_FILE_NAME = location.file_name;
    DCUR_FUNC_NAME = location.func_name;
    
    return &debug_log_error;
}
//--------------------------------------------//

// больше выделения для ошибок и ворнингов в файле???
void debug_log(DLOG_TYPE type, const char* string, ...){

    assert(string != NULL);
    
    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);

    char time_str[20] = "";
    strftime(time_str, 16, "%H:%M:%S", ptm);

	va_list args;
	va_start(args, str);

    #if DLOG_TO_FILE_ENABLED
    switch(type){
        case INFO:{
            fprintf(dlog_file, "[ERROR] %s--%s--%s<%u>:: \n",
                time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);
            break;
        }
        case INFO:{
            fprintf(dlog_file, "[ERROR] %s--%s--%s<%u>:: \n",
                time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);
            break;
        }
        default:{
            fprintf(dlog_file, "[UNDEFINIED] %s--%s--%s<%u>:: \n",
                time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);
            break;
        }
    }
    
    vfprintf(dlog_file, string, args);
	fprintf(dlog_file, "\n");
	
    #endif  //DLOG_TO_FILE_ENABLED

    #if DLOG_TO_CONSOLE_ENABLED

    switch(type){
        case INFO:{
            fprintf(dlog_file, "%s[ERROR] %s--%s--%s<%u>:: \n",
                WARNING_FONT, time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);
            break;
        }
        case INFO:{
            fprintf(dlog_file, "%s[ERROR] %s--%s--%s<%u>:: \n",
                INFO_FONT, time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);
            break;
        }
        default:{
            fprintf(dlog_file, "%s[UNDEFINIED] %s--%s--%s<%u>:: \n",
                INVALID_LOG_FONT, time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);
            break;
        }
    }
    
    vprintf(string, args);
	printf("%s\n", TERM_RESET);

    #endif  // DLOG_TO_CONSOLE_ENABLED

	va_end(args);

    return;
}
//--------------------------------------------//

void debug_log_error(ERROR_CODE err_code, const char* string, ...){

    assert(string != NULL);
    
    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);

    char time_str[20] = "";
    strftime(time_str, 16, "%H:%M:%S", ptm);

	va_list args;
	va_start(args, str);

    fprintf(dlog_file, "[ERROR] %s--%s--%s<%u>:: \n",
        time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);

    vfprintf(dlog_file, string, args);
	fprintf(dlog_file, "\n");
	
    #endif  //DLOG_TO_FILE_ENABLED

    #if DLOG_TO_CONSOLE_ENABLED

    fprintf(dlog_file, "%s[ERROR] %s--%s--%s<%u>:: \n",
        ERROR_FONT, time_str, DCUR_LOC.file_name, DCUR_LOC.func_name, DCUR_LOC.n_line);

    vprintf(string, args);
	printf("%s\n", TERM_RESET);

    #endif  // DLOG_TO_CONSOLE_ENABLED

	va_end(args);

    LogClose();
    exit(err_code);
    
    return;
}
//--------------------------------------------//

void clog_init(CDUMP_OPTION mode, const char* path){

    if(mode == CDUMP_OPTION::FILE || mode == CDUMP_OPTION::BOTH){
        char name[MAX_LOG_NAME_LEN] = "";
        get_log_name(name, path);
        сlog_file = fopen(name, "w");

        if(clog_file == NULL){
            EDLOG(CREATING_FILE, "Unable to create log file on way: %s%s\n", LOG_LOCATION, name);
        }
    }

    DLOG(INFO, "Compiler logging initiated");

    return;
}
//--------------------------------------------//

int dlog_init(){

    #if DLOG_TO_FILE_ENABLED
    
    char name[MAX_LOG_NAME_LEN] = "";
    get_log_name(name, LOG_LOCATION);
    dlog_file = fopen(name, "w");

    if(dlog_file == NULL){
        printf("Unable to create log file on way: %s%s\n", LOG_LOCATION, name);
        return 1;
    }
    #endif //DLOG_TO_FILE_ENABLED

    DLOG(INFO, "Logging initiated");

    return;
}
//--------------------------------------------//

void log_splitter(COMP_STAGE cur_stage, void* log_data){

    assert(log_data != NULL);

    switch(cur_stage){
        case INPUT_HANDLER:{
            log_input_handler(log_data);
            break;
        }
        case LEXER:{
            log_lexer(log_data);
            break;
        }
        case PARSER:{
            log_parser(log_data);
            break;
        }
        case CODE_GEN:{
            log_code_gen(log_data);
            break;
        }
        case ASM:{
            log_asm(log_data);
            break;
        }
        default:{
            DLOG()
        }
    }
}
//--------------------------------------------//
