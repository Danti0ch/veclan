#ifndef INPUT_HANLER_H
#define INPUT_HANLER_H

#include <logger.h>

const uint MAX_FILE_NAME_LEN = 1 << 8;

// TODO: transfer the file expansion to config file (vecl)
const char* default_file_name[MAX_FILE_NAME_LEN] = "main.vecl";


compiler_options* InitCompilerOpts (const int argc, const char* argv[]);

#endif  // INPUT_HANLER_H
