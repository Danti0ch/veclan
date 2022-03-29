#include "logger.h"
#include <time.h>
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

static FILE* log_file = NULL;

//----------------------LOCAL-FUNCTIONS-DECLARATION-----------------------//

void get_log_name(char* str);

//----------------------PUBLIC-FUNCTIONS-DEFINITIONS----------------------//

int LogInit(){

	char name[MAX_LOG_NAME_LEN] = "";
	get_log_name(name);
	log_file = fopen(name, "w");

	if(log_file == NULL){
        printf("Unable to create log file on way: %s%s\n", LOG_LOCATION, name);
        return 1;
    }

	LOG(INFO, "Logging initiated");

	return;
}
//--------------------------------------------//

void LogClose(){

	assert(log_file != NULL);
	ConsoleLog(LOG_TYPE::INFO, "Logging closed");
	fclose(log_file);

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
void LOG(LOG_TYPE type, const char* str, ...){

    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);

    char time_str[20] = "";
    strftime(time_str, 16, "%H:%M:%S", ptm);

	va_list args;
	va_start(args, str);

	if(type == LOG_TYPE::ERROR){
		fprintf(log_file, "[ERROR] %s: ", time_str);
	}
	else if(type == LOG_TYPE::INFO){
		fprintf(log_file, "[INFO] %s: ", time_str);
	}
	else if(type == LOG_TYPE::WARNING){
		fprintf(log_file, "[WARNING] %s: ", time_str);
	}
	vfprintf(log_file, str, args);
	fprintf(log_file, "\n");
		
	if(type == LOG_TYPE::ERROR){
		printf("%s[ERROR] %s: ", ERROR_FONT, time_str);
	}
	else if(type == LOG_TYPE::INFO){
		printf("%s[INFO] %s: ", WARNING_FONT, time_str);
	}
	else if(type == LOG_TYPE::WARNING){
		printf("%s[WARNING] %s: ", INFO_FONT, time_str);
	}
	
	vprintf(str, args);
	printf("%s\n", TERM_RESET);

	va_end(args);

	if(type == LOG_TYPE::ERROR){
		LogClose();
		exit(0);
	}

	return;
}

void DebugLog(DLOG_TYPE type, const char* string, err_loc location){

    assert(string != NULL);

    
    return;
}
//----------------------LOCAL-FUNCTIONS-DEFINITIONS----------------------//

void get_log_name(char* buf){

    assert(buf != NULL);

	strcpy(buf, LOG_LOCATION);

    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);

    strftime(buf + strlen(buf), MAX_LOG_NAME_LEN, "%H-%M-%S(%d.%m.%Y)", ptm);

    return;
}
//--------------------------------------------//
