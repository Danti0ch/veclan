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

    obj->errors = StackConstructor(INIT_STACK_ERRORS_SIZE);
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
    TextStorageRemove(obj->text_data);

    free(obj->ast);
    free(obj);
    DLOG(INFO, "gvl unit %p was destructed", obj);

    return;
}
//----------------------------------------------------------------------------------------//

void PushLexem(gvl_unit* obj, const lexem* lex){

    VectorPush(obj->lexems, lex);
    return;
}
//----------------------------------------------------------------------------------------//

//const char* GetInputFileName
// IsFlag
// getinputfilename
// etc
// Delete
