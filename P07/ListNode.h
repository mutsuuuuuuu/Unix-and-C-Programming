#ifndef LISTNODE_H
#define LISTNODE_H


typedef struct ListNode
{
    	void* value;
    	struct ListNode *next;
	struct ListNode *prev;
}Node;

Node* createNode();
void setValue(Node *node, void *inValue);
void *getValue(Node *node);
void freeNode(Node *node);
#endif
