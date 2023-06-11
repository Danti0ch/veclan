#include "input_handler.h"
#include <assert.h>
#include <string.h>
#include "text_storage.h"

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

void parse_flags(gvl_unit* gvl, const int argc, const char* argv[]);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

// FillCompilerOpts -> construction of the buffer struct that contains compiling info
void FillCompilerOpts(gvl_unit* gvl, const int argc, const char* argv[]){

    assert(gvl != NULL);
    assert(argc > 0);
    assert(argv != NULL);

    if(argc == 1) ECLOG("write name of the file to compile")

    size_t file_name_len = strlen(argv[1]);

    if(file_name_len >= MAX_FILE_NAME_LEN) ECLOG("file name len exceeded");

    strncpy(gvl->input_file_name, argv[1], file_name_len);
    parse_flags(gvl, argc, argv);

    return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

void parse_flags(gvl_unit* gvl, const int argc, const char* argv[]){

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
            ;
        }
    }
    
    DLOG(INFO, "parse flags finished");
    
    return;
}
//----------------------------------------------------------------------------------------//

void ReadText(gvl_unit* gvl) {
    NASSERT(gvl);
    NASSERT(gvl->input_file_name);

    size_t file_size = GetFileSize(gvl->input_file_name);

    DLOG(LOG_TYPE::INFO, "Size of read file: %llu", file_size);

    gvl->text_data = StringCtor(file_size);

    FILE *input_file = fopen(gvl->input_file_name, "r");
    assert(input_file != NULL);

    int reading_status = fread(gvl->text_data->data, sizeof(char), file_size, input_file);
    gvl->text_data->size = file_size;
    assert(reading_status >= 0);

    fclose(input_file);

    return;
}
