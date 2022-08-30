#include <assert.h>
#include <cstdlib>
#include "analyzer.h"

// TODO: глобальный обработчик??
// TODO: грамотный обработчик ошибок

/*
Node* get_func_definition();

Node* get_body();

Node* get_keyword();

Node* get_identfr();

Node* get_assignment();

Node* get_function_call();

Node* get_lvalue();

Node* GetN();

Node* get_rvalue();

Node* GetT();

Node* GetPow();

Node* GetP();

Node* get_log1();

Node* get_log2();

Node* get_log3();

bool is_name_in_table(char* name, node_function* func);

static void get_nametable(node_function* func);

#define move_lexem() _move_lexem(__LINE__)
void _move_lexem(int n_line);

#define require(type) _require(type, __LINE__)
void _require(TOKEN_TYPE type, int n_line);

#define frequire(type, val) _frequire(type, val, __LINE__)
void _frequire(TOKEN_TYPE type, int val, int n_line);

bool check_value(int val);

bool is_operation();

static void get_args_from_node(node_function* func);
static void get_names_from_node(node_function* func, Node* cur_node);

*/

ast_handler handler = {};
int check_result    = 1;

Node* GetAreaDefinition();
Node* GetBody();
Node* GetIdent();
Node* GetFuncCall();
Node* GetAssignment();
Node* GetLvalue();
Node* GetRvalue();
Node* GetT();
Node* GetPow();
Node* GetP();
Node* GetN();
Node* GetCondKword();
Node* GetLogical();

//========================================================================================//

//                          AUXIL_FUNCTIONS_DECLARATION

//========================================================================================//

void        require(LEXEM_TYPE type);
void        require(LEXEM_TYPE type, STATEMENT_ID id);
void        require(STATEMENT_ID id);

int        check(LEXEM_TYPE type);
int        check(LEXEM_TYPE type, STATEMENT_ID id);
int        check(STATEMENT_ID id);

#define     CHECK_TYPE(type, destroy_node)              \
{                                                       \
    if(!(check((LEXEM_TYPE)type))){                     \
        NodeFullDtor(destroy_node);                     \
        return NULL;                                    \
    }                                                   \
}

#define     CHECK_ID(id, destroy_node)              \
{                                                       \
    if(!(check((STATEMENT_ID)id))){                     \
        NodeFullDtor(destroy_node);                     \
        return NULL;                                    \
    }                                                   \
}

#define     TOTAL_CHECK(type, id, destroy_node)              \
{                                                       \
    if(!(check((LEXEM_TYPE)type, STATEMENT_ID(id)))){   \
        NodeFullDtor(destroy_node);                     \
        return NULL;                                    \
    }                                                   \
}

inline lexem* get_lexem(){
    return (lexem*)(handler.gvl->lexems->data) + handler.cur_lexem;
}

// TODO: rename
inline void move_lexem(){
    handler.cur_lexem++;
    return;
}

//========================================================================================//

//

//                          GENERAL_FUNCTION_DEFINITION

//

//========================================================================================//

void GenerateAST(gvl_unit* gvl){

    assert(gvl    != NULL);

    handler.gvl         = gvl;
    handler.cur_lexem   = 0;

    int cur_area        = 0;
    uint n_lexems       = VectorSize(gvl->lexems);
    
    while(handler.cur_lexem < n_lexems){

        gvl->ast->exec_area[cur_area] = GetAreaDefinition();
        cur_area++;
    }

    gvl->ast->n_areas    = cur_area;

    DumpNode(gvl->ast->exec_area[0]);
    return;
}
//----------------------------------------------------------------------------------------//

Node* GetAreaDefinition(){

    require(LEXEM_TYPE::KEYWORD, STATEMENT_ID::AREA_DEF);
    move_lexem();

    require(LEXEM_TYPE::IDENT);
    Node* root_node = NodeCtor(get_lexem());
    move_lexem();

    require(LEXEM_TYPE::SEPARATOR, STATEMENT_ID::R_BRACKET_OPEN);
    move_lexem();
    
    Node* cur_arg  = root_node;

    while(check(LEXEM_TYPE::IDENT)){
        
        Node* new_arg = NodeCtor(get_lexem());
        MakeConnection(cur_arg, new_arg, NODE_PLACE::LEFT);
        cur_arg = new_arg;
        
        move_lexem();
        require(LEXEM_TYPE::SEPARATOR, STATEMENT_ID::IDENT_SEPARATOR);
        move_lexem();
    }

    require(LEXEM_TYPE::SEPARATOR, STATEMENT_ID::R_BRACKET_CLOSE);
    move_lexem();

    Node* body = GetBody();

    MakeConnection(root_node, body, NODE_PLACE::RIGHT);

    return root_node;
}
//----------------------------------------------------------------------------------------//

Node* GetBody(){

    require(STATEMENT_ID::SCOPE_OPEN);
    move_lexem();

    
    // TODO: rework mb
    Node* total_root_node = NULL;

    Node* cur_node  = NULL;

    while(!(check(STATEMENT_ID::SCOPE_CLOSE))){
        uint n_cur_lexem = handler.cur_lexem;

        Node* procedure_node = GetIdent();
        if(procedure_node == NULL){
            handler.cur_lexem = n_cur_lexem;
            procedure_node = GetCondKword();
        }
        if(procedure_node == NULL){
            handler.cur_lexem = n_cur_lexem;
            lexem* cur_lexem = get_lexem();
            ECLOG("unable to recognize statement on (%u %u)", cur_lexem->n_line, cur_lexem->n_col);
        }
        require(STATEMENT_ID::EXPR_CLOSE);

        if(total_root_node == NULL){
            total_root_node = NodeCtor(get_lexem());
            cur_node = total_root_node;
            move_lexem();

            MakeConnection(cur_node, procedure_node, NODE_PLACE::RIGHT);
        }
        else{
            cur_node->left = NodeCtor(get_lexem());
            move_lexem();

            MakeConnection(cur_node->left, procedure_node, NODE_PLACE::RIGHT);
            cur_node = cur_node->left;
        }
    }

    move_lexem();
    
    return total_root_node;
}
//----------------------------------------------------------------------------------------//

Node* GetIdent(){

    uint n_cur_lexem = handler.cur_lexem;

    Node* cur_node = GetFuncCall();
    if(cur_node == NULL){
        handler.cur_lexem = n_cur_lexem;
        cur_node = GetAssignment();
    }
    if(cur_node == NULL){
        handler.cur_lexem = n_cur_lexem;
        if(check(STATEMENT_ID::RET)){
            cur_node = NodeCtor(get_lexem());
            move_lexem();
        }
    }

    return cur_node;
}
//----------------------------------------------------------------------------------------//

Node* GetFuncCall(){

    CHECK_ID(STATEMENT_ID::CALL, NULL);

    Node* root_node = NodeCtor(get_lexem());
    move_lexem();

    require(LEXEM_TYPE::IDENT);
    
    Node* name_node = NodeCtor(get_lexem());
    move_lexem();

    require(STATEMENT_ID::R_BRACKET_OPEN);
    move_lexem();

    MakeConnection(root_node, name_node, NODE_PLACE::RIGHT);

    Node* cur_node = root_node;
    if(check(LEXEM_TYPE::IDENT)){
        Node* new_arg = NodeCtor(get_lexem());
        MakeConnection(cur_node, new_arg, NODE_PLACE::LEFT);
        cur_node = new_arg;
        move_lexem();
    }
    while(check(STATEMENT_ID::IDENT_SEPARATOR)){
        
        require(LEXEM_TYPE::SEPARATOR, STATEMENT_ID::IDENT_SEPARATOR);
        move_lexem();

        Node* new_arg = NodeCtor(get_lexem());
        MakeConnection(cur_node, new_arg, NODE_PLACE::LEFT);
        cur_node = new_arg;
        
        move_lexem();
    }

    require(STATEMENT_ID::R_BRACKET_CLOSE);
    move_lexem();

    return root_node;
}
//----------------------------------------------------------------------------------------//

Node* GetAssignment(){

    Node* lvalue = GetLvalue();
    if(lvalue == NULL) return NULL;

    CHECK_ID(STATEMENT_ID::ASSIGN, lvalue);
    Node* root_node = NodeCtor(get_lexem());
    move_lexem();

    Node* rvalue = GetRvalue();
    if(rvalue == NULL) return NULL;

    MakeConnection(root_node, lvalue, NODE_PLACE::LEFT);
    MakeConnection(root_node, rvalue, NODE_PLACE::RIGHT);
    
    return root_node;
}
//----------------------------------------------------------------------------------------//

Node* GetLvalue(){

    CHECK_TYPE(LEXEM_TYPE::IDENT, NULL);
    Node* node = NodeCtor(get_lexem());
    move_lexem();

    return node;
}
//----------------------------------------------------------------------------------------//

Node* GetRvalue(){

    Node* parent = GetT();
    if(parent == NULL) return NULL;

    while(check(STATEMENT_ID::ADDITION) || check(STATEMENT_ID::SUBTRACTION)){

        Node* new_parent = NodeCtor(get_lexem());
        move_lexem();

        Node* left_node  = parent;
        Node* right_node = GetT();
        
        if(right_node == NULL){
            NodeFullDtor(parent);
            NodeFullDtor(new_parent);
            
            return NULL;
        }

        MakeConnection(new_parent, left_node, NODE_PLACE::LEFT);
        MakeConnection(new_parent, right_node, NODE_PLACE::RIGHT);
        
        parent = new_parent;
    }

    return parent;
}
//----------------------------------------------------------------------------------------//

Node* GetT(){

    Node* parent = GetPow();

    while(check(STATEMENT_ID::MULTIPLICATION) || check(STATEMENT_ID::DIVISION)){

        Node* new_parent = NodeCtor(get_lexem());
        move_lexem();

        Node* left_node  = parent;
        Node* right_node = GetPow();
        
        if(right_node == NULL){
            NodeFullDtor(parent);
            NodeFullDtor(new_parent);
            
            return NULL;
        }

        MakeConnection(new_parent, left_node, NODE_PLACE::LEFT);
        MakeConnection(new_parent, right_node, NODE_PLACE::RIGHT);
        
        parent = new_parent;
    }

    return parent;
}
//----------------------------------------------------------------------------------------//

Node* GetPow(){

    Node* parent = GetP();

    while(check(STATEMENT_ID::POW)){

        Node* new_parent = NodeCtor(get_lexem());
        move_lexem();

        Node* left_node  = parent;
        Node* right_node = GetP();
        
        if(right_node == NULL){
            NodeFullDtor(parent);
            NodeFullDtor(new_parent);
            
            return NULL;
        }

        MakeConnection(new_parent, left_node, NODE_PLACE::LEFT);
        MakeConnection(new_parent, right_node, NODE_PLACE::RIGHT);
        
        parent = new_parent;
    }

    return parent;
}
//----------------------------------------------------------------------------------------//

Node* GetP(){

    if(check(STATEMENT_ID::R_BRACKET_OPEN)){

        move_lexem();
    
        Node* node = GetRvalue();
        if(node == NULL) return NULL;

        require(STATEMENT_ID::R_BRACKET_CLOSE);
        move_lexem();

        return node;
    }

    return GetN();
}
//----------------------------------------------------------------------------------------//

Node* GetN(){

    if(check(LEXEM_TYPE::IDENT)){
        return GetLvalue();
    }

    require(LEXEM_TYPE::DIGIT_VALUE);

    Node* root = NodeCtor(get_lexem());
    move_lexem();

    return root;
}
//----------------------------------------------------------------------------------------//

Node* GetCondKword(){

    if(check(STATEMENT_ID::WHILE)){

        Node* root = NodeCtor(get_lexem());
        move_lexem();

        require(STATEMENT_ID::R_BRACKET_OPEN);
        move_lexem();

        Node* condition_node = GetLogical();

        require(STATEMENT_ID::R_BRACKET_CLOSE);
        move_lexem();
        
        Node* body = GetBody();

        MakeConnection(root, condition_node,    NODE_PLACE::LEFT);
        MakeConnection(root, body,              NODE_PLACE::RIGHT);

        return root;        
    }
    else{
        return NULL;
    }
}
//----------------------------------------------------------------------------------------//

Node* GetLogical(){

    printf("10\n");
    Node* val1 = GetRvalue();

    while(check(STATEMENT_ID::EQUAL)){
        Node* op_lexem = NodeCtor(get_lexem());
        move_lexem();

        Node* left_node  = val1;

        Node* right_node = GetRvalue();

        MakeConnection(op_lexem, left_node,  NODE_PLACE::LEFT);
        MakeConnection(op_lexem, right_node, NODE_PLACE::RIGHT);
        
        val1 = op_lexem;
    }
    printf("10\n");
    return val1;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//

//                          AUXIL_FUNCTION_DEFINITION

//

//========================================================================================//


void require(LEXEM_TYPE type){
    
    lexem* cur_lexem = get_lexem();
    if(cur_lexem->type == type){
        return;
    }

    if(type == LEXEM_TYPE::KEYWORD){
        ECLOG("expected keyword on (%u, %u)", cur_lexem->n_line, cur_lexem->n_col);
    }
    else if(type == LEXEM_TYPE::SEPARATOR){
        ECLOG("expected separator on (%u, %u)", cur_lexem->n_line, cur_lexem->n_col);
    }
    else if(type == LEXEM_TYPE::KEYWORD){
        ECLOG("expected identificator on (%u, %u)", cur_lexem->n_line, cur_lexem->n_col);
    }
    else if(type == LEXEM_TYPE::KEYWORD){
        ECLOG("expected operator on (%u, %u)", cur_lexem->n_line, cur_lexem->n_col);
    }
    else if(type == LEXEM_TYPE::KEYWORD){
        ECLOG("expected digit on (%u, %u)", cur_lexem->n_line, cur_lexem->n_col);
    }

    return; // fictive
}
//----------------------------------------------------------------------------------------//

void require(LEXEM_TYPE type, STATEMENT_ID id){

    lexem* cur_lexem = get_lexem();
    if(cur_lexem->type == type && cur_lexem->id == id){
        return;
    }

    char expected_type_name[32] = "";
    char found_type_name[32]    = "";
    
    get_type_name(type, expected_type_name);
    get_type_name(cur_lexem->type, found_type_name);

    ECLOG("expected %s: %s on (%u, %u), found %s", expected_type_name, get_statement_name(id), cur_lexem->n_line, cur_lexem->n_col, found_type_name);
    return; // fictive
}
//----------------------------------------------------------------------------------------//

void require(STATEMENT_ID id){

    lexem* cur_lexem = get_lexem();
    if(cur_lexem->id == id){
        return;
    }
    printf("%d %d\n", (int)cur_lexem->id, (int)id);

    ECLOG("expected %s on (%u, %u), found %s", get_statement_name(id), cur_lexem->n_line, cur_lexem->n_col);
    return; // fictive
}
//----------------------------------------------------------------------------------------//

int check(LEXEM_TYPE type){
    
    lexem* cur_lexem = get_lexem();
    if(cur_lexem->type == type){
        return 1;
    }

    return 0;
}
//----------------------------------------------------------------------------------------//

int check(LEXEM_TYPE type, STATEMENT_ID id){

    lexem* cur_lexem = get_lexem();
    if(cur_lexem->type == type && cur_lexem->id == id){
        return 1;
    }

    return 0;
}
//----------------------------------------------------------------------------------------//

int check(STATEMENT_ID id){

    lexem* cur_lexem = get_lexem();
    if(cur_lexem->id == id){
        return 1;
    }

    return 0;
}
//----------------------------------------------------------------------------------------//

/*
Node* get_log1(){
    Node* val1 = get_log2();

    while(check_type(TOKEN_TYPE::OPERATOR) && (check_value(EQUAL) || check_value(ABOVE) || check_value(S_ABOVE) ||
                                               check_value(UNDER) || check_value(S_UNDER))){
        Token* op_lexem = cur_lexem;
        move_lexem();

        Node* left_node  = val1;
        Node* right_node = get_log2();

        val1 = NodeCtor(op_lexem, left_node, right_node);
    }

    return val1;
}
//__________________________________________________________________


Node* get_log2(){

    Node* val1 = get_log3();

    while(check_type(TOKEN_TYPE::OPERATOR) && check_value(OR)){
        Token* op_lexem = cur_lexem;
        move_lexem();

        Node* left_node  = val1;
        Node* right_node = get_log3();

        val1 = NodeCtor(op_lexem, left_node, right_node);
    }

    return val1;
}
//__________________________________________________________________


Node* get_log3(){

    Node* val1 = get_rvalue();

    while(check_type(TOKEN_TYPE::OPERATOR) && check_value(AND)){
        Token* op_lexem = cur_lexem;
        move_lexem();

        Node* left_node  = val1;
        Node* right_node = get_rvalue();

        val1 = NodeCtor(op_lexem, left_node, right_node);
    }

    return val1;
}
//__________________________________________________________________


Node* get_keyword(){

    require(TOKEN_TYPE::KEYWORD);

    if(check_value(RETURN)){
        Node* root = NodeCtor(cur_lexem);
        move_lexem();

        Node* body = get_rvalue();

        MakeConnection(root, body, NODE_PLACE::LEFT);

        frequire(TOKEN_TYPE::SPECIAL_SYMB, END_OF_OPERATION);
        move_lexem();

        return root;
    }
    else if(check_value(WHILE_LOOP) || check_value(IF)){
        Node* root = NodeCtor(cur_lexem);
        move_lexem();

        frequire(TOKEN_TYPE::SPECIAL_SYMB, BRACKET_ROUND_L);
        move_lexem();

        Node* condition = get_log1();

        frequire(TOKEN_TYPE::SPECIAL_SYMB, BRACKET_ROUND_R);
        move_lexem();

        Node* body = get_body();

        MakeConnection(root, condition, NODE_PLACE::LEFT);

        if(root->value.id == WHILE_LOOP){
            MakeConnection(root, body, NODE_PLACE::RIGHT);
        }
        else if(check_type(TOKEN_TYPE::KEYWORD) && check_value(ELSE)){
            Node* nodelse = NodeCtor(cur_lexem);
            move_lexem();

            Node* elsebody = get_body();

            MakeConnection(root, nodelse,     NODE_PLACE::RIGHT);
            MakeConnection(nodelse, body,     NODE_PLACE::LEFT);
            MakeConnection(nodelse, elsebody, NODE_PLACE::RIGHT);
        }
        else{
            MakeConnection(root, body, NODE_PLACE::RIGHT);
        }
        return root;
    }
    else{
        ConsoleLog(LOG_TYPE::ERROR, "wrong lexema");
    }

    return (Node*)NODE_POISON;
}
//__________________________________________________________________

// lvalue == 1 lexem (true?)
Node* get_identfr(){

    Node* root = (Node*)NODE_POISON;
    if((cur_lexem + 1)->type == TOKEN_TYPE::OPERATOR && (cur_lexem + 1)->id == ASSIGN){
        root = get_assignment();
    }
    else if((cur_lexem + 1)->type == TOKEN_TYPE::SPECIAL_SYMB && (cur_lexem + 1)->id == BRACKET_ROUND_L){
        root = get_function_call();
    }
    else{
        ConsoleLog(LOG_TYPE::ERROR, "invalid construction, abort");
    }

    frequire(TOKEN_TYPE::SPECIAL_SYMB, END_OF_OPERATION);
    move_lexem();

    return root;
}
//__________________________________________________________________

Node* get_assignment(){

    Node* lvalue = get_lvalue();

    frequire(TOKEN_TYPE::OPERATOR, ASSIGN);
    move_lexem();

    Node* rvalue = get_rvalue();

    return NodeCtor(TOKEN_TYPE::OPERATOR, ASSIGN, lvalue, rvalue);
}
//__________________________________________________________________

Node* get_function_call(){
    require(TOKEN_TYPE::IDENTIFICATOR);

    Node* root = NodeCtor(TOKEN_TYPE::KEYWORD, FUNCTION_CALL);
    Node* name = NodeCtor(cur_lexem);

    MakeConnection(root, name, NODE_PLACE::RIGHT);
    move_lexem();

    frequire(TOKEN_TYPE::SPECIAL_SYMB, BRACKET_ROUND_L);
    move_lexem();
    
    Node* cur_arg  = root;

    while(check_type(TOKEN_TYPE::IDENTIFICATOR) || check_type(TOKEN_TYPE::CONSTANT)){
        
        Node* new_arg = get_rvalue();

        MakeConnection(cur_arg, new_arg, NODE_PLACE::LEFT);
        cur_arg = new_arg;
    }

    frequire(TOKEN_TYPE::SPECIAL_SYMB, BRACKET_ROUND_R);
    move_lexem();

    return root;
}
//________________________________ __________________________________

Node* get_lvalue(){

    require(TOKEN_TYPE::IDENTIFICATOR);

    Node* root = (Node*)NODE_POISON;
    
    if((cur_lexem + 1)->type == TOKEN_TYPE::SPECIAL_SYMB && (cur_lexem + 1)->id == BRACKET_ROUND_L){
        root = get_function_call();
    }
    else{
        root = NodeCtor(cur_lexem);
        move_lexem();
    }

    return root;
}
//__________________________________________________________________

Node* GetN(){

    if(check_type(TOKEN_TYPE::IDENTIFICATOR)){
        return get_lvalue();
    }

    require(TOKEN_TYPE::CONSTANT);

    Node* root = NodeCtor(TOKEN_TYPE::CONSTANT, cur_lexem->const_val);
    move_lexem();
    return root;
}
//__________________________________________________________________

Node* get_rvalue(){
    
    Node* parent = GetT();

    while(check_type(TOKEN_TYPE::OPERATOR) && 
         (check_value(ADD) || check_value(SUB))){

        Token *op_lexem = cur_lexem;    
        move_lexem();

        Node* left_node  = parent;
        Node* right_node = GetT();
        
        parent = NodeCtor(op_lexem, left_node, right_node);
    }

    return parent;
}
//__________________________________________________________________

Node* GetT(){

    Node* parent = GetPow();

    while(check_type(TOKEN_TYPE::OPERATOR) && 
         (check_value(MUL) || check_value(DIV))){

        Token *op_lexem = cur_lexem;    
        move_lexem();

        Node* left_node  = parent;
        Node* right_node = GetPow();
        
        parent = NodeCtor(op_lexem, left_node, right_node);
    }

    return parent;
}
//__________________________________________________________________

Node* GetPow(){

    Node* parent = GetP();

    while(check_type(TOKEN_TYPE::OPERATOR) && check_value(POW)){

        Token *op_lexem = cur_lexem;    
        move_lexem();

        Node* left_node  = parent;
        Node* right_node = GetP();
        
        parent = NodeCtor(op_lexem, left_node, right_node);
    }

    return parent;
}
//__________________________________________________________________

Node* GetP(){

    if(check_type(TOKEN_TYPE::SPECIAL_SYMB) && check_value(BRACKET_ROUND_L)){
        move_lexem();
    
        Node* node = get_rvalue();

        frequire(TOKEN_TYPE::SPECIAL_SYMB, BRACKET_ROUND_R);
        move_lexem();

        return node;
    }

    return GetN();
}
//__________________________________________________________________

bool is_operation(){
    if(cur_lexem->type == TOKEN_TYPE::IDENTIFICATOR || cur_lexem->type == TOKEN_TYPE::KEYWORD)
        return true;
    return false;
}
//__________________________________________________________________

void _move_lexem(int n_line){

    if(is_identificator(cur_lexem->type)){
        ConsoleLog(LOG_TYPE::INFO, "READ(%d) \t%s: %s", n_line, GetStringOfType(cur_lexem->type), cur_lexem->name);
    }
    else if(is_constant(cur_lexem->type)){
        ConsoleLog(LOG_TYPE::INFO, "READ(%d) \t%s: %g", n_line, GetStringOfType(cur_lexem->type), cur_lexem->const_val);
    }
    else{
        ConsoleLog(LOG_TYPE::INFO, "READ(%d) \t%s: %d", n_line, GetStringOfType(cur_lexem->type), cur_lexem->id);
    }

    cur_lexem++;
}
//__________________________________________________________________
*/
