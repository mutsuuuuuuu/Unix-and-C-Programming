#ifndef ENTRYNODE_H
#define ENTRYNODE_H

#include "journalEntry.h"
typedef struct Node
{
    Node *prev;
    Node *next;
    Journal *data;
}Node;

Node *createNode(Journale *inData);
void freeNode(Node *data);   
#endif
