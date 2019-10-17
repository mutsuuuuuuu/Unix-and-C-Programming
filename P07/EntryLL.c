#include <stdlib.h>
#include "EntryLL.h"
#include "EntryNode.h"

#define TRUE 1
#define FALSE 0
LinkedList *createLinkedList()
{
    LinkedList *newList;
    
    newList = (LinkedList*)malloc(sizeof(LinkedList));

    newList->head=NULL;
    newList->tail =NULL;
    return newList;
}

void insertFirst(LinkedList *list, JournalEntry *entry)
{
    Node *newNd = createNode(entry);
    if(isEmpty(list) == TRUE)
    {
        list->head = newNd;
        list->tail = newNd;
    }
    else
    {
        newNd->next = head;
        list->head->prev = newNd;
        newNd->prev = NULL;
        list->head=newNd;
    }
}

int isEmtpy(LinkedList *list)
{
    int isEmpty;
    isEmpty = FALSE;

    if(list->head == NULL || list->tail == NULL)
    {
        isEmpty = TRUE;
    }
    return isEmpty;
}
