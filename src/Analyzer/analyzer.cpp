#include "analyzer.h"
#include "../logger.h"
#include <assert.h>

void InitAnalyze(gvl_unit* gvl){

    assert(gvl != NULL);

    DLOG(INFO, "analyzing phase initiated");

    FillLexemArr(gvl);
    // GenerateAST(gvl);
    DLOG(INFO, "analyzing phase finished, found %lu errors", GetStackSize(gvl->errors));
    return;
}
//----------------------------------------------------------------------------------------//
