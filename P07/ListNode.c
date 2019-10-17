#include <stdio.h>
#include <stdlib.h>

#include "ListNode.h"


/**This function will create a new node**/
Node *createNode()
{
	Node *newNode=NULL;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->prev = NULL;
    newNode->value = NULL;
	return newNode;
}
/**this function takes a node and a value, and set it**/
void setValue(Node* node, void *inValue)
{
	node->value=inValue;
}

/** accessor **/
void* getValue(Node *node)
{
    return node->value;
}

void freeNode(Node *node)
{
    free(node);
}
