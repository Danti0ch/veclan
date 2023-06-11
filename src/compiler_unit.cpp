// тут нужно будет реализовать интерфейсные методы структуры compiler_unit
#include <assert.h>
#include "logger.h"
#include "compiler_unit.h"
#include <string.h>

// TODO: верификатор ???

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//
void parse_flags(gvl_unit* gvl, const int argc, const char* argv[]);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

gvl_unit* GvlUnitConstructor(){

    gvl_unit* obj = (gvl_unit*)calloc(1, sizeof(gvl_unit));
    CHECKALLOC(obj)

    strcpy(obj->path_to_logs, DEFAULT_PATH_TO_LOGS);

    obj->errors = StackConstructor(INIT_STACK_ERRORS_SIZE, sizeof(uint)); // todo: temporart
    obj->lexems = VectorNew(INIT_LEXEM_ARRAY_SIZE, sizeof(lexem));

    obj->text_data = NULL;
    obj->ast    = (ast_tree*)calloc(1, sizeof(ast_tree));

    DLOG(INFO, "gvl unit %p was created", obj);
    return obj;
}
//----------------------------------------------------------------------------------------//

void GvlUnitDestructor(gvl_unit* obj){

    if(obj == NULL) return;

    VectorDelete(obj->lexems);
    StackDestructor(obj->errors);

    free(obj->ast);
    free(obj);
    DLOG(INFO, "gvl unit %p was destructed", obj);

    return;
}
//----------------------------------------------------------------------------------------//

void GvlDump(const gvl_unit* obj) {
    NASSERT(obj);

    printf("GVL_UNIT DUMP:\n");
    printf("Lexem_array {\n");
    if(obj->lexems) {
        for(uint n_lexem = 0; n_lexem < VectorSize(obj->lexems); n_lexem++) {
            lexem* cur_lexem = (lexem*)VectorGet(obj->lexems, n_lexem);
            printf("%u) pos - [%u, %u], tag - [%u, %u] %.*s\n", n_lexem, cur_lexem->n_line, cur_lexem->n_col, cur_lexem->tag, cur_lexem->subtag, (int)cur_lexem->str_buflen, cur_lexem->str_bufpos);
        }
    }
    printf("}\n");
}
//----------------------------------------------------------------------------------------//

//const char* GetInputFileName
// IsFlag
// getinputfilename
// etc
// Delete
