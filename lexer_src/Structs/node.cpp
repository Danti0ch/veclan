#include "node.h"
#include <assert.h>
#include <stdio.h>
#include <cstdlib>
#include <cstdarg>
#include <math.h>

//========================================================================================//

//                          LOCAL_FUNCTIONS_DECLARATION

//========================================================================================//

/**
 * создаёт dot файл с информацией об узле node и его потомках
 */
static void generate_dot(Node* node, void (*print_func)(FILE*, uint, const Node*), char const * file_name);

/**
 * записывает в дот файл узел node со всеми потомками
 */
static void write_node_to_dot(Node const * node, int* n_node, void (*print_func)(FILE*, uint, const Node*), FILE* output_file);

/**
 * создаёт картинку для дот файла
 *
 * \param input_file_name имя дот файлa
 * \param output_file_name имя картинки
 */
static void generate_image(char const * input_file_name, char const * output_file_name);

/**
 * выполняет команду, указанную в строку cmd_str в консоли
 */
static void execute_term_cmd(char const * cmd_str, ...);

//========================================================================================//

//                          PUBLIC_FUNCTIONS_DEFINITION

//========================================================================================//

Node* NodeCtor(Node* parent, void* val, size_t elem_size, NODE_PLACE place){

	NASSERT(parent);
	NASSERT(val);

	Node* node = NodeCtor(val, elem_size);

	if(ISNULL(node)) return NULL;

	node->parent = parent;
	node->place  = place;
	
	if(place == NODE_PLACE::LEFT){
		if(!ISNULL(parent)) parent->left  = node;
	}
	else{
		if(!ISNULL(parent)) parent->right = node;
	}
}
//----------------------------------------------------------------------------------------//

Node* NodeCtor(void* val, size_t elem_size){

	NASSERT(val);
	Node* node  = (Node*)calloc(1, sizeof(Node));

	if(ISNULL(node)){
		EDLOG(ALLOC_MEM, "couldn't alloc mem on node");
		return NULL;
	}

	node->val    =  calloc(1, elem_size);
	memcpy(node->val, val, elem_size);
	
	node->left   = (Node*)NODE_POISON;
	node->right  = (Node*)NODE_POISON;
	node->parent = (Node*)NODE_POISON;

	node->place  = NODE_PLACE::LEFT;

	return node;
}
//----------------------------------------------------------------------------------------//

Node* NodeCtor(void* val, size_t elem_size, Node* l_son, Node* r_son){

	NASSERT(val);
	NASSERT(l_son);
	NASSERT(r_son);
	
	Node* parent = NodeCtor(val, elem_size);

	MakeConnection(parent, l_son, NODE_PLACE::LEFT);
	MakeConnection(parent, r_son, NODE_PLACE::RIGHT);
	
	return parent;
}
//----------------------------------------------------------------------------------------//

Node* NodeCtor(size_t elem_size){

	return NodeCtor(NULL, elem_size);
}
//----------------------------------------------------------------------------------------//

void NodeDtor(Node* node){

	NASSERT(node);

	if(ISNULL(node))  return;
	
	if(IsLeft(node) && IsValid(node->parent)){
		node->parent->left = (Node*)NODE_POISON;
	}

	else if(IsValid(node->parent)){
		node->parent->right = (Node*)NODE_POISON;
	}

	free(node->val);
	free(node);

	return;
}
//----------------------------------------------------------------------------------------//

void NodeFullDtor(Node* node){

	if(ISNULL(node)) return;

	if(IsValid(node->left))  NodeFullDtor(node->left);

	if(IsValid(node->right)) NodeFullDtor(node->right);

	NodeDtor(node);
	
	return;
}
//----------------------------------------------------------------------------------------//

void RemoveDescendants(Node* node){

	NASSERT(node);

	if(node->left  != NULL) NodeFullDtor(node->left);
	if(node->right != NULL) NodeFullDtor(node->right);

	return;
}
//----------------------------------------------------------------------------------------//

Node* CopyNode(Node* parent, Node* source_node, NODE_PLACE place){

	NASSERT(parent);
	NASSERT(source_node);

	Node* new_node = NodeCtor(parent, source_node->val, source_node->elem_size, place);
	if(ISNULL(new_node)) return NULL;

	if(IsValid(source_node->left)){
		CopyNode(new_node, source_node->left, NODE_PLACE::LEFT);
	}

	if(IsValid(source_node->right)){
		CopyNode(new_node, source_node->right, NODE_PLACE::RIGHT);
	}

	return new_node;
}
//----------------------------------------------------------------------------------------//

Node* CopyNode(Node* source_node){

	NASSERT(source_node);

	Node* new_node = NodeCtor(source_node->val, source_node->elem_size);
	if(ISNULL(new_node)) return NULL;

	if(IsValid(source_node->left)){
		CopyNode(new_node, source_node->left, NODE_PLACE::LEFT);
	}

	if(IsValid(source_node->right)){
		CopyNode(new_node, source_node->right, NODE_PLACE::RIGHT);
	}

	return new_node;
}
//----------------------------------------------------------------------------------------//

void MakeConnection(Node* parent, Node* son, NODE_PLACE place){

	NASSERT(parent);
	NASSERT(son);

	if(son != (Node*)NODE_POISON){
		son->place = place;
		son->parent = parent;
	}

	if(place == NODE_PLACE::LEFT){
		parent->left = son;
	}
	else{
		parent->right = son;
	}
	return;
}
//----------------------------------------------------------------------------------------//

void BreakConnWithParent(Node* son){

	NASSERT(son);

	if(!IsValid(son->parent)) return;

	if(IsLeft(son)){
		son->parent->left = (Node*)NODE_POISON;
	}
	else{
		son->parent->right = (Node*)NODE_POISON;		
	}

	son->parent = (Node*)NODE_POISON;

	return;
}
//----------------------------------------------------------------------------------------//

void BreakConnWithSon(Node* parent, NODE_PLACE place){

	NASSERT(parent);

	if(place == NODE_PLACE::LEFT){
		if(!IsValid(parent->left)) return;

		parent->left->parent = (Node*)NODE_POISON;
		parent->left         = (Node*)NODE_POISON;
	}

	else{
		if(!IsValid(parent->right)) return;

		parent->right->parent = (Node*)NODE_POISON;
		parent->right         = (Node*)NODE_POISON;
	}
	
	return;
}
//----------------------------------------------------------------------------------------//

void NodeSwap(Node* node1, Node* node2){

	NASSERT(node1);
	NASSERT(node2);

	if(node1 == node2) return;

	void* 	p_val1 		= node1->val;
	size_t 	elem_size1 	= node1->elem_size;

	node1->val = node2->val;
	node2->val = p_val1;

	node1->elem_size = node2->elem_size;
	node2->elem_size = elem_size1;

	return;
}
//----------------------------------------------------------------------------------------//

void DumpNode(Node* node, void (*print_func)(FILE*, uint, const Node*)){

	NASSERT(node);
	NASSERT(print_func);
		
	generate_dot(node, print_func, GVIZ_DOT_NAME);
	generate_image(GVIZ_DOT_NAME, NODE_DUMP_IMG_NAME);

	DLOG(LOG_TYPE::INFO, "showed Node %p", node);	
	return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

static void generate_dot(Node* node, void (*print_func)(FILE*, uint, const Node*), char const * file_name){

	NASSERT(node);
	NASSERT(file_name);
	NASSERT(print_func);

	FILE* tmp_file = fopen(file_name, "w");

	if(ISNULL(tmp_file)){
		EDLOG(OWN, "can't create/read file %s", file_name);
	}

	fprintf(tmp_file, "digraph Tree{\n");

	int n_node = 0;	//< индекс узла
	write_node_to_dot(node, &n_node, print_func, tmp_file);

	fprintf(tmp_file, "}\n");

	fclose(tmp_file);

	DLOG(LOG_TYPE::INFO, "file %s was generated for Node %p", file_name, node);
	return;
}
//----------------------------------------------------------------------------------------//

static void write_node_to_dot(Node const * node, int* n_node, void (*print_func)(FILE*, uint, const Node*), FILE* output_file){

	NASSERT(node);
	NASSERT(n_node);
	NASSERT(print_func);

	int cur_n_node = *n_node;

	print_func(output_file, cur_n_node, node);

	if(IsValid(node->left)){
		(*n_node)++;
		fprintf(output_file, "%d->%d;\n", cur_n_node, *n_node);
		write_node_to_dot(node->left, n_node, print_func, output_file);
	}

	if(IsValid(node->right)){
		(*n_node)++;
		fprintf(output_file, "%d->%d;\n", cur_n_node, *n_node);
		write_node_to_dot(node->right, n_node, print_func, output_file);
	}

	//ToLog(LOG_TYPE::INFO, "Node %p was written to file", node);
	return;
}
//----------------------------------------------------------------------------------------//

static void generate_image(char const * input_file_name, char const * output_file_name){

	NASSERT(input_file_name);
	NASSERT(output_file_name);

	assert(input_file_name != output_file_name);

	execute_term_cmd("dot -Tpng %s -o %s", input_file_name, output_file_name);
	return;
}
//----------------------------------------------------------------------------------------//

void execute_term_cmd(char const * cmd_str, ...){

	assert(cmd_str != NULL);

	va_list args;
    va_start(args, cmd_str);

	// fix
    int buflen   = 500;//_vscprintf(cmd_str, args) + 1;
    char *buffer = (char*)calloc(buflen, sizeof(char));

    if (buffer != NULL){
        vsprintf(buffer, cmd_str, args);
    }

    va_end( args );

    system(buffer);

	free(buffer);
	return;
}
//----------------------------------------------------------------------------------------//
