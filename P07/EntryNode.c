#include <stdlib.h>
#include "EntryNode.h"
#include "journalEntry.h"
Node *createNode(Journal *inData)
{
    Node *newNd;
    newNd = (Node*)malloc(sizeof(Node));
    
    newNd->next = NULL;
    newNd->prev = NULL;
    newNd->data = inData;

    return newNd;
}

void freeNode(Node *node)
{
    /**free the data first**/
    freeData(node->data);

    /**free the node**/
    free(node);
}
