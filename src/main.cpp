// TODO: DELETE INPUT HANDLER

// TODO: пофиксить относительный порядок хэдеров
#include "logger.h"
#include "compiler_unit.h"
#include "Analyzer/analyzer.h"
#include "InputHandler/input_handler.h"

int main(const int argc, const char* argv[]){

    LogInit("../logs/");
    gvl_unit* gvl = GvlUnitConstructor();

    FillCompilerOpts(gvl, argc, argv);
    
    ReadText(gvl);

    InitAnalyze(gvl);
    
    GvlUnitDestructor(gvl);

    LogClose();
    return 0;
}
