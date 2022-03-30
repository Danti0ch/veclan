#include "input_handler.h"
#include <assert.h>
#include <string.h>

//----------------------LOCAL-FUNCTIONS-DECLARATION-----------------------//

void parse_flags(compiler_options* cur_compil_status, const int argc, const char* argv[]);

//----------------------PUBLIC-FUNCTIONS-DEFINITIONS----------------------//

// ParseCmdOption -> construction of the buffer struct that contains compiling info
compiler_options* FillCompilerOpts(const int argc, const char* argv[]){

    assert(argv > 0);
    assert(argv != NULL);

    compiler_options cur_compil_opts = (compiler_options*)calloc(1, sizeof(compiler_options));
    cur_compil_status->input_file_name = (char*)calloc(MAX_FILE_NAME_LEN, sizeof(char));
    
    if(argc == 1){
        strncpy(cur_compil_opts->input_file_name, default_file_name, MAX_FILE_NAME_LEN);
    }
    else{
        strncpy(cur_compil_opts->input_file_name, argv[1], MAX_FILE_NAME_LEN);
        parse_flags(cur_compil_status, argc, argv);

    }

}
//--------------------------------------------//

//----------------------LOCAL-FUNCTIONS-DEFINITIONS----------------------//

void parse_flags(gvl_unit* gvl, const int argc, const char* argv[]){

    assert(cur_compil_status != NULL);
    assert(argv != NULL);
    assert(argc > 1);

    if(argc < 3) return;

    for(uint word_ind = 2; word_ind < argc; word_ind++){

        char* cur_word = argv[word_ind][0];

        // Нужно собрать все флаги, которые не распознаны в один буфер, а потом если этот буфер составлен, то вывести его и вывести сообщение об ошибке
        if(argv[word_ind][0] == '-'){
            for(int n_flag = 0; n_flag < FLAGS_NUM; n_flag++){
                if(strcmp(cur_word, gvl_flags[n_flag].name) == 0){
                    if(gvl->flags_set[n_flag]){

                        // TODO: -
                        ECLOG(INPUT_HANDLER, UNKNOWN_FLAG, "-%s", );
                    }
                }
            }
        }
        else{

        }
    }
}
//--------------------------------------------//

