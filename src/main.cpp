int main(const int argc, const char* argv[]){

    ParseCmdOptions(argc, argv);

    text_storage input_text_storage = {};

    ReadInputFile(&input_text_storage);

    
    return 0;
}
