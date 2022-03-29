#ifndef LOGGER_H
#define LOGGER_H

enum COMP_STAGES{

    INPUT_HANDLER,
    LEXER,
    PARSER,
    CODE_GEN,
    ASM
};

struct err_loc{

    char* file_name;
    char* func_name;
    uint  n_line;
};

enum DLOG_TYPE{
    INFO,
    WARNING,
    ERROR
};

// for debugging errors
struct derr{

    ERROR_CODE num_of_val;
    err_loc    location;
};

const int  MAX_LOG_NAME_LEN  = 2 << 8;
const char LOG_LOCATION[32]  = "../logs/";  // TODO: make config for customise this option
const int  MAX_LOG_STR_LEN   = 2 << 10;

// TODO: make/find way to implement possibility to right specification strings
#define DLOG(type, string)               \\
{                                         \\
                                           \\
    DebugLog(type, string, {__FILE__,       \\
                            __FUNCTION__,    \\
                            __LINE__});       \\
}

void DebugLog(DLOG_TYPE type, const char* string, err_loc location);

#endif  // LOGGER_H
