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
static void generate_dot(Node* node, char const * file_name);

/**
 * записывает в дот файл узел node со всеми потомками
 */
static void write_node_to_dot(Node const * nod, int* n_node, FILE* output_file);

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

Node* NodeCtor(Node* parent, lexem* val, NODE_PLACE place){

	assert(parent != NULL);

	Node* node = NodeCtor(val);

	if(node == NULL) return NULL;

	node->parent = parent;
	node->place  = place;

	if(place == NODE_PLACE::LEFT){
		if(parent != NULL) parent->left  = node;
	}
	else{
		if(parent != NULL) parent->right = node;
	}
	return node;
}
//----------------------------------------------------------------------------------------//

Node* NodeCtor(lexem* val){

	Node* node  = (Node*)calloc(1, sizeof(Node));

	if(node == NULL){
		EDLOG(ALLOC_MEM, "couldn't alloc mem on node");
		return NULL;
	}

	node->value =  val;

	node->left   = (Node*)NODE_POISON;
	node->right  = (Node*)NODE_POISON;
	node->parent = (Node*)NODE_POISON;

	node->place  = NODE_PLACE::LEFT;

	return node;
}
//----------------------------------------------------------------------------------------//

Node* NodeCtor(lexem* val, Node* l_son, Node* r_son){

	assert(val != NULL);
	assert(l_son != NULL);
	assert(r_son != NULL);
	
	Node* parent = NodeCtor(val);

	MakeConnection(parent, l_son, NODE_PLACE::LEFT);
	MakeConnection(parent, r_son, NODE_PLACE::RIGHT);
	
	return parent;
}
//----------------------------------------------------------------------------------------//

Node* NodeCtor(){

	return NodeCtor(NULL);
}
//----------------------------------------------------------------------------------------//

void NodeDtor(Node* node){

	assert(node != NULL);

	if(node == NULL)  return;
	
	if(IsLeft(node) && IsValid(node->parent)){
		node->parent->left = (Node*)NODE_POISON;
	}

	else if(IsValid(node->parent)){
		node->parent->right = (Node*)NODE_POISON;
	}

	free(node);

	return;
}
//----------------------------------------------------------------------------------------//

void NodeFullDtor(Node* node){

	if(node == NULL) return;

	if(IsValid(node->left))  NodeFullDtor(node->left);

	if(IsValid(node->right)) NodeFullDtor(node->right);

	NodeDtor(node);
	
	return;
}
//----------------------------------------------------------------------------------------//

void RemoveDescendants(Node* node){

	assert(node != NULL);

	if(node->left  != NULL) NodeFullDtor(node->left);
	if(node->right != NULL) NodeFullDtor(node->right);

	return;
}
//----------------------------------------------------------------------------------------//

Node* CopyNode(Node* parent, Node* source_node, NODE_PLACE place){

	assert(parent 		!= NULL);
	assert(source_node 	!= NULL);

	Node* new_node = NodeCtor(parent, source_node->value, place);
	if(new_node == NULL) return NULL;

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

	assert(source_node 	!= NULL);

	Node* new_node = NodeCtor(source_node->value);
	if(new_node == NULL) return NULL;

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

	assert(parent != NULL);
	assert(son    != NULL);

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

	assert(son    != NULL);

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

	assert(parent    != NULL);

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

void DumpNode(Node* node){

	assert(node != NULL);

	generate_dot(node, GVIZ_DOT_NAME);
	generate_image(GVIZ_DOT_NAME, NODE_DUMP_IMG_NAME);

	DLOG(LOG_TYPE::INFO, "showed Node %p", node);	
	return;
}
//----------------------------------------------------------------------------------------//

//========================================================================================//

//                          LOCAL_FUNCTIONS_DEFINITION

//========================================================================================//

static void generate_dot(Node* node, char const * file_name){

	assert(node      != NULL);
	assert(file_name != NULL);

	FILE* tmp_file = fopen(file_name, "w");

	if(tmp_file == NULL){
		EDLOG(OWN, "can't create/read file %s", file_name);
	}

	fprintf(tmp_file, "digraph Tree{\n");

	int n_node = 0;	//< индекс узла
	write_node_to_dot(node, &n_node, tmp_file);

	fprintf(tmp_file, "}\n");

	fclose(tmp_file);

	DLOG(LOG_TYPE::INFO, "file %s was generated for Node %p", file_name, node);
	return;
}
//----------------------------------------------------------------------------------------//

static void write_node_to_dot(Node const * node, int* n_node, FILE* output_file){

	assert(node        != NULL);
	assert(output_file != NULL);

	int cur_n_node = *n_node;

	//#if DUMP_MODE == DETAILED_DUMP
		if(node->value->type == LEXEM_TYPE::IDENT){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#E6F099\", ", cur_n_node);
		}
		else if(node->value->type == LEXEM_TYPE::DIGIT_VALUE){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#6E90CA\", ", cur_n_node);
		}
		else if(node->value->type == LEXEM_TYPE::KEYWORD){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#CA6EC2\", ", cur_n_node);			
		}
		else if(node->value->type == LEXEM_TYPE::OPERATOR){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#6ECA7B\", ", cur_n_node);
		}
		else if(node->value->type == LEXEM_TYPE::SEPARATOR){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#6ABA7B\", ", cur_n_node);
		}

		char type_name[MAX_LEXEM_NAME_LEN] = "";
		get_type_name(node->value->type, type_name);

		fprintf(output_file, 	"shape = \"record\", label = \"{"
								"adress:  %p |"
								"parent:  %p |"
								"left:    %p |"
								"right:   %p |"
								"place:   %s |"
								"type:    %s |",
								node,
								node->parent,
								node->left,
								node->right,
								node->place == NODE_PLACE::LEFT ? "left" : "right",
								type_name);

		if(node->value->type == LEXEM_TYPE::IDENT){
			fprintf(output_file, "value:   %s}\"];\n", node->value->ident);
		}
		else if(node->value->type == LEXEM_TYPE::DIGIT_VALUE){
			fprintf(output_file, "value:   %ld}\"];\n", node->value->digit);
		}
		else if(node->value->type == LEXEM_TYPE::KEYWORD || node->value->type == LEXEM_TYPE::OPERATOR || node->value->type == LEXEM_TYPE::SEPARATOR){
			fprintf(output_file, "value:   %s}\"];\n", get_statement_name(node->value->id));
		}
	/*
	#else
		if(IsConstant(node)){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#E6F099\", shape = \"record\", label = \"%.6lg\"]\n", cur_n_node, node->value);
		}

		else if(IsVariable(node)){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#6E90CA\", shape = \"record\", label = \"%c\"];\n", cur_n_node, node->value);
		}
		else if(IsOperation(node)){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#CA6EC2\", shape = \"record\", label = \"%c\"];\n", cur_n_node, node->value);			
		}
		else if(IsFunction(node)){
			fprintf(output_file, "%d[style = \"filled\", fillcolor = \"#6ECA7B\", shape = \"record\", label = \"%s\"];\n", cur_n_node, GetFuncName(node->value.func_id));
		}
		else{
			ToLog(LOG_TYPE::ERROR, "try to dump invalid node(Node %p)", node);
			return;
		}
	#endif //DUMP_MODE == DETAILED_DUMP
	*/

	if(IsValid(node->left)){
		(*n_node)++;
		fprintf(output_file, "%d->%d;\n", cur_n_node, *n_node);
		write_node_to_dot(node->left, n_node, output_file);
	}

	if(IsValid(node->right)){
		(*n_node)++;
		fprintf(output_file, "%d->%d;\n", cur_n_node, *n_node);
		write_node_to_dot(node->right, n_node, output_file);
	}

	//ToLog(LOG_TYPE::INFO, "Node %p was written to file", node);
	return;
}
//----------------------------------------------------------------------------------------//

static void generate_image(char const * input_file_name, char const * output_file_name){

	assert(input_file_name   != NULL);
	assert(output_file_name  != NULL);
	assert(input_file_name   != output_file_name);

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
