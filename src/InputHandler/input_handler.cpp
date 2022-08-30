#include "input_handler.h"
#include "../Structs/text_storage.h"
#include "../logger.h"
#include <assert.h>


gvl_flag gvl_flags[FLAGS_NUM] = {
    {"-o", ASSIGN_NAME}
};

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

static void parse_flags(gvl_unit* gvl, const int argc, const char* argv[]);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

void ReadText(gvl_unit* gvl){

    assert(gvl != NULL);
    gvl->text_data = GetStorage(gvl->input_file_name);

    return;
}
//----------------------------------------------------------------------------------------//

// FillCompilerOpts -> construction of the buffer struct that contains compiling info
void FillCompilerOpts(gvl_unit* gvl, const int argc, const char* argv[]){

    assert(gvl != NULL);
    assert(argc > 0);
    assert(argv != NULL);

    if(argc == 1) ECLOG("write name of the file to compile")

    size_t file_name_len = strlen(argv[1]);

    if(file_name_len >= MAX_FILE_NAME_LEN) ECLOG("file name len exceeded");

    strcpy(gvl->input_file_name, argv[1]);
    parse_flags(gvl, argc, argv);

    return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

static void parse_flags(gvl_unit* gvl, const int argc, const char* argv[]){

    assert(gvl != NULL);
    assert(argv != NULL);
    assert(argc > 1);

    if(argc < 3) return;

    DLOG(INFO, "parse flags initiated");

    for(uint word_ind = 2; word_ind < argc; word_ind++){

        const char* cur_word = argv[word_ind];

        // Нужно собрать все флаги, которые не распознаны в один буфер, а потом если этот буфер составлен, то вывести его и вывести сообщение об ошибке
        if(cur_word[0] == '-'){
            for(int n_flag = 0; n_flag < FLAGS_NUM; n_flag++){

                if(strcmp(cur_word, gvl_flags[n_flag].name) == 0){
                    gvl->flags_set[n_flag] = 1;
                    MDLOG("%s flag recognized", cur_word);
                }
            }
        }
        else{

        }
    }
    
    DLOG(INFO, "parse flags finished");
    
    return;
}
//----------------------------------------------------------------------------------------//
