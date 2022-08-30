/**
 * \file
 * 	\brief Библиотека, в который реализована структура узла и методы, для работы с ней.
 */

#ifndef NODE_H
#define NODE_H

#include <string.h>
#include "../logger.h"
#include "../statement_data.h"

#define SIMPLE_DUMP   0
#define DETAILED_DUMP 1

#ifndef DUMP_MODE
#define DUMP_MODE SIMPLE_DUMP
#endif

/**
 * энам, для определения положения узла относительно родителя
 */
enum class NODE_PLACE{
	LEFT,
	RIGHT
};

/**
 * структура узла
 */
struct Node{

	Node*      left; 	  //!< указатель на левого потомка
	Node*      right;   //!< указатель на правого потомка
	Node*      parent;  //!< указатель на родителя

	lexem*      value;   //!< указатель на узел в буфере

	NODE_PLACE place;   //!< задаёт положение узла относительно родителя
};

const int NODE_POISON  = 0xDEADD00D;

const int MAX_FUNC_LEN = 10;

const int  MAX_IMG_N_STRING_LEN = 20;
const int  FILE_NAME_LEN        = 40;

//------------PUBLIC-FUNCTIONS-DECLARATION------------------------

Node* NodeCtor(Node* parent, lexem* val, NODE_PLACE place);

Node* NodeCtor(lexem* val);
Node* NodeCtor(lexem* val, Node* l_son, Node* r_son);

Node* NodeCtor();
/**
 * удаляет узел, без удаления потомков
 */
void NodeDtor(Node* nod);

/**
 * удаляет узел и потомков
 */
void NodeFullDtor(Node* node);

/**
 * удаляет потомков у узла
 */
void RemoveDescendants(Node* node);

/**
 * создаёт копию узла со всеми потомками
 *
 * \param parent родитель для копии
 * \param place расположение копии узла
 *
 * \return копия узла source_node
 */
Node* CopyNode(Node* parent, Node* source_node, NODE_PLACE place);
Node* CopyNode(Node* source_node);
/**
 * создаёт связь между узлами parent, son
 */
void MakeConnection(Node* parent, Node* son, NODE_PLACE place);

/**
 * дезинтегрирует связь c отцовским узлом son
 */
void BreakConnWithParent(Node* son);

/**
 * дезинтегрирует связь c дочерним узлом parent
 */
void BreakConnWithSon(Node* parent, NODE_PLACE place);

/**
 * создаёт картинку с дампом узла node со всеми потомками
 */
void DumpNode(Node* node);

//__________________________________________________________________
/**
 * проверяет, что узел был создан конструктором(то что он не пуст)
 */
inline bool IsValid(const Node* node){
	return (node != NULL) && (node != (Node*)NODE_POISON);
}
//__________________________________________________________________
/**
 * \return 1 если node не имеет потомков
 * \return 0 если node имеет потомков
 */
inline bool IsLeaf(const Node* node){
	return node->left == NULL && node->right == NULL;
}
//__________________________________________________________________

inline bool IsLeft(const Node* node){
	return node->place == NODE_PLACE::LEFT;
}

inline bool IsRight(const Node* node){
	return node->place == NODE_PLACE::RIGHT;
}
//__________________________________________________________________

#endif //NODE_H
