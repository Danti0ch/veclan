#include "input_handler.h"
#include "compiler_unit.h"

// TODO: подкрутить логирование
// TODO: сделать полный рефактор

/// хранит указатель на си строку и её длину

//----------------------LOCAL-FUNCTIONS-DECLARATION-----------------------//

/**
 * получает количество строк и символов файла
 * 
 * \param file_name имя файла, размер которого нужно узнать
 * \param  storage
 * 
 * \return код возвращаемого значения из func_codes
 */
void get_file_len(text_storage* storage);

/**
 * функция выделяет память для указателей storage. размер необходимый памяти задаётся storage.buf_len и storage.num_lines
 * 
 * \param storage структура text_storage для которой нужно выделить память
 * 
 * \return код возвращаемого значения из func_codes
 */ 
void create_mem_storage(text_storage *storage);

/**
 * функция очищает память, которая была динамически присвоена элементам storage в create_mem_storage
 * 
 * \param storage структура text_storage, память которой нужно очистить
 * 
 * \return код возвращаемого значения из func_codes
 */ 
void clear_mem_storage(text_storage *storage);

inline size_t get_bytes(void *left_pointer, void *right_pointer){

    return (char*)(right_pointer) - (char *)(left_pointer);
}

//----------------------PUBLIC-FUNCTIONS-DEFINITIONS----------------------//


void ReadInputFile(text_storage *storage){

    assert(storage != NULL);
    assert(file_name != NULL);

    get_file_len(storage));
    create_mem_storage(storage);

    const char* file_name = GetInputFileName();
    FILE *input_file = fopen(file_name, "r");

    if(input_file == NULL){
        EDLOG(OPENING_FILE, "unable to open %s", file_name);
    }
    
    int reading_status = fread(storage->buffer, sizeof(storage->buffer[0]), storage->len_buf, input_file);

    if(reading_status < 0){
        EDLOG(READ_BUFFER, "unable to read data from %s", file_name);
    }

    fclose(input_file);

    // ?
    storage->buffer[storage->len_buf - 1] = '\n';

    int is_new_line = 1;
    size_t n_line = 0;
    size_t n_symbols_in_line = 1;

    // TODO: 
    const char comment_symb = *(GetLexemName(COMMENT_SYMB));

    // TODO: многострочная лексема под символ комментария
    // TODO: уменьшить размер под хранение буфера за счёт того, чтобы пересоздавать буфер без комментариев в нём
    
    for(int ind_buf = 0; ind_buf < storage->len_buf; ind_buf++, n_symbols_in_line++){

        if(is_new_line){
            storage->p_lines[n_Line].pointer = storage->buffer + ind_buf;

            is_new_line = 0;
        }
        if(storage->buffer[ind_buf] == '\n'){
            storage->p_lines[n_line].len = n_symbols_in_line - 1; // '\0' не учитывается в длине строки

            n_symbols_in_line = 0;
            storage->buffer[ind_buf] = '\0';

            is_new_line = 1;
            n_line++;
        }
        if(storage->buffer[ind_buf] == comment_symb){

            storage->buffer[ind_buf] = '\0';

            while(ind_buf < storage->len_buf && storage->buffer[ind_buf] != '\n'){
                ind_buf++;
            }
            ind_buf--;
        }
    }

    return;
}
//----------------------------------------------------------------------------------------//

//----------------------LOCAL-FUNCTIONS-DEFINITIONS----------------------//

void clear_mem_storage(text_storage *storage){

    assert(storage != NULL);
    
    free(storage->p_lines);
    free(storage->buffer);

    storage->buffer  = (char*)P_AFTER_CALLOC;
    storage->p_lines = (string*)P_AFTER_CALLOC;
    
    return;
}
//----------------------------------------------------------------------------------------//

void create_mem_storage(text_storage *storage){

    assert(storage != NULL);
    assert(storage->len_buf > 0);
    assert(storage->num_lines > 0);
    
    storage->buffer = (char*)calloc(storage->len_buf, sizeof(char));

    storage->p_lines = (string*)calloc(storage->n_lines, sizeof(string));

    if((storage->buffer == NULL) || (storage->p_lines == NULL)){
        EDLOG(ALLOC_MEM, "unable alloc mem for text storage");
    }

    return;
}
//----------------------------------------------------------------------------------------//

// x6,5 faster than fgetc stuff
void get_file_len(text_storage* storage){

    assert(file_name != NULL);
    assert(storage != NULL);
    
    const char* file_name = GetInputFileName();

    storage->len_buf     = 0;
    storage->n_lines = 0;

    FILE *text_file = fopen(file_name, "r");

    if(text_file == NULL){
        EDLOG(OPENING_FILE, "unable to open %s", file_name);    
    }

    fseek(text_file, 0, SEEK_END);

    size_t file_size = ftell(text_file);

    if(file_size <= 0){
        fclose(text_file);
        EDLOG(EMPTY_INPUT_FILE, "file %s is empty", file_name);
    }

    fseek(text_file, 0, SEEK_SET);

    char *buffer = (char*)calloc(file_size + 1, sizeof(char));

    size_t n_readen_bytes = fread(buffer, sizeof buffer[0], file_size + 1, text_file);

    if(n_readen_bytes == 0){
        fclose(text_file);
        EDLOG(READ_BUFFER, "unable to read data of %s", file_name);
    }

    storage->len_buf = n_readen_bytes;

    for(uint n_byte = 0; n_byte < n_readen_bytes; n_byte++){
        if(buffer[n_byte] == '\n'){
            storage->n_lines++;
        }
    }

    // если на последней непустой строчке нет символа переноса
    if((buffer[n_readen_bytes - 1] > 0) && (buffer[n_readen_bytes - 1] != '\n')){
        storage->n_lines++;
    }

    free(buffer);
    fclose(text_file);

    return OK;
}
//----------------------------------------------------------------------------------------//
