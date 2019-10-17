#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdbool.h>
#include "ListNode.h"

typedef struct LinkedList
{
	Node *head;
	Node *tail;
    int countNode;
}LinkedList;

LinkedList *createLinkedList();
void insertFirst(void *inData, LinkedList *LL);
void insertLast(void *inData, LinkedList *LL);
void removeFirst(LinkedList *LL);
void removeLast(LinkedList *LL);
void printList(LinkedList *LL,void (*fptr)(void *));
int getNodeCount(LinkedList *LL);
int isEmpty(LinkedList *LL);
void printInt(void *data);
void printFlaot(void *data);
void printString(void *data);
void freeList(LinkedList *LL);
#endif
