#include "rec_descent.h"
#include <assert.h>
#include "spec_constants.h"
#include "string.h"

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

input_handler handler = {NULL, 0, 0, 0, 0};

inline char cur_symb(){
    if(handler.n_symb >= handler.storage->len_buf){
        EDLOG(OWN, "Unable to continue further parsing, found error on (%u, %u)", handler.ln, handler.col);
    }
    return handler.storage->buffer[handler.n_symb];
}

// TODO: rename
inline int isspecial(char symb){
    if(symb == '|' || symb == ']' || symb == ')' || symb == '*'){
        return 1;
    }
    return 0;
}

void pass_symb();
void require(char symb);

/// @brief handles OR
Node* GetL1();

/// @brief handles non special symbols
Node* GetL2();

/// @brief handles REP 
Node* GetL3();

/// @brief handles brackets and symbols
Node* GetL4();


/**
 * @brief replaces cur_root with new_root(new_root_symb) in tree, than make cur_root left child of new_root and makes child in right of new_root with right_node
 * 
 * @param cur_root 
 * @param new_root_symb 
 * @param right_node_symb 
 * @return Node* 
 */
Node* make_node_level(Node* cur_root, char new_root_symb, Node* right_node);

inline int isspace(char symb){

    if(symb == ' ' || symb == '\t' || symb == '\n' || symb == 0) return 1;
    return 0;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

Node*       CreateAST(char* buffer, size_t size){
    
    NASSERT(buffer);
    handler = {NULL, 0, 0, 0, 0};

    handler.storage = GetStorage(buffer, size);
    handler.n_symbs = handler.storage->len_buf;

    if(isspace(cur_symb())) pass_symb();

    Node* tree = GetL1();

    TextStorageRemove(handler.storage);
    return tree;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

Node* GetL1(){

    Node* prim_node = GetL2();
    
    if(handler.n_symb < handler.n_symbs && cur_symb() == SPEC_OR_SYMB){
        pass_symb();

        Node* right_ch = GetL2();

        prim_node = make_node_level(prim_node, SPEC_OR_VAL, right_ch);
    }

    Node* temp_root = prim_node->right;

    while(handler.n_symb < handler.n_symbs && cur_symb() == SPEC_OR_SYMB){
        pass_symb();

        Node* right_ch = GetL2();
        
        temp_root = make_node_level(temp_root, SPEC_OR_VAL, right_ch);
    }

    return prim_node;
}
//----------------------------------------------------------------------------------------//

Node* GetL2(){

    Node* prim_node = GetL3();
    
    if(handler.n_symb < handler.n_symbs && !isspecial(cur_symb())){

        Node* right_ch = GetL3();

        prim_node = make_node_level(prim_node, SPEC_BOND_VAL, right_ch);
    }
    Node* temp_root = prim_node->right;

    while(handler.n_symb < handler.n_symbs && !isspecial(cur_symb())){

        Node* right_ch = GetL3();

        temp_root = make_node_level(temp_root, SPEC_BOND_VAL, right_ch);
    }

    return prim_node;
}
//----------------------------------------------------------------------------------------//

Node* GetL3(){

    Node* prim_node = GetL4();

    if(handler.n_symb < handler.n_symbs && cur_symb() == SPEC_REP_SYMB){
        pass_symb();

        char val = SPEC_REP_VAL;
        Node* root = NodeCtor(&val, sizeof(char));
        MakeConnection(root, prim_node, NODE_PLACE::RIGHT);

        return root;
    }

    return prim_node;
}
//----------------------------------------------------------------------------------------//

Node* GetL4(){

    char symb = cur_symb();

    Node* prim_node = NULL; 

    if(symb == '\\'){

        prim_node = NodeCtor(&symb, sizeof(char));
        pass_symb();

        if(handler.n_symb >= handler.n_symbs) return prim_node;
        symb = cur_symb();

        if(symb == '(' || symb == '[' || symb == ')' || symb == ']' || symb == '|' || symb == '*'){
            *((char*)prim_node->val) = symb;
            pass_symb();
        }
    }
    else if(symb == '('){

        pass_symb();

        prim_node = GetL1();
        require(')');

        pass_symb();
        /*
        if(cur_symb() == '('){
            pass_symb();
            Node* right_ch = GetL1();

            require(')');
            pass_symb();

            prim_node = make_node_level(prim_node, SPEC_BOND_VAL, right_ch);
        }

        Node* temp_root = prim_node->right;

        while(cur_symb() == '('){
            pass_symb();

            Node* right_ch = GetL1();
            require(')');
            pass_symb();

            temp_root = make_node_level(temp_root, SPEC_BOND_VAL, right_ch);
        }*/
    }
    else{

        prim_node = NodeCtor(&symb, sizeof(char));
        pass_symb();
    }

    return prim_node;
}
//----------------------------------------------------------------------------------------//

void pass_symb(){
    
    handler.n_symb++;
    handler.col++;

    while(handler.n_symb < handler.storage->len_buf &&
          isspace(handler.storage->buffer[handler.n_symb])){
        
        handler.n_symb++;
        handler.col++;
    }

    return;
}
//----------------------------------------------------------------------------------------//

void require(char symb){

    if(cur_symb() != symb){
        EDLOG(OWN, "On (%u, %u) expected %c, found %c", handler.ln, handler.col, symb, cur_symb());
    }
}
//----------------------------------------------------------------------------------------//

Node* make_node_level(Node* cur_root, char new_root_symb, Node* right_node){

    NASSERT(cur_root);
    NASSERT(right_node);

    Node* new_root = NodeCtor(&new_root_symb, sizeof(char));

    if(IsValid(cur_root->parent)){
        Node* cur_parent = cur_root->parent;
        BreakConnWithParent(cur_root);
        MakeConnection(cur_parent, new_root, NODE_PLACE::RIGHT);
    }
    
    MakeConnection(new_root, cur_root, NODE_PLACE::LEFT);
    MakeConnection(new_root, right_node, NODE_PLACE::RIGHT);

    return new_root;
}
//----------------------------------------------------------------------------------------//
