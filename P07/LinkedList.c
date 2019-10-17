#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "LinkedList.h"
#include "ListNode.h"

/**CONSTRUCTOR**/
LinkedList *createLinkedList()
{
	LinkedList *newLL;
	newLL = (LinkedList*)malloc(sizeof(LinkedList));
	newLL->head = NULL;
	newLL->tail = NULL;
    newLL->countNode = 0;	
	return newLL;
}

void insertFirst(void *inData, LinkedList *LL)
{
	Node *newNd = createNode();
	/**set the value**/
	setValue(newNd,inData); 
	if(isEmpty(LL)==1)
	{
		LL->head=newNd;
		LL->tail=newNd;
	}
    else
    {
        /**set the next node of the newnode to equal head**/
        newNd->next = LL->head;
        /**set the head's previous node to be newnode**/
        LL->head->prev = newNd;
        /**set the newnode's prev node to be null**/
        newNd->prev = NULL;
        /**set the head to equal new node**/
        LL->head = newNd;
    }
    LL->countNode++;
    	
}
void insertLast(void *inData, LinkedList *LL)
{
    Node *newNd = createNode();
    setValue(newNd,inData);
    
    if(isEmpty(LL)==1)
    {
        LL->head = newNd;
        LL->tail = newNd;
    }
    else
    {
        /**make the next node of tail node to be newNd**/
        LL->tail->next = newNd;
        /**set the prev newNd's node to be tail node**/
        newNd->prev = LL->tail;
        /**set newNd's next node to be null**/
        newNd->next = NULL;
        /**set LL tail to be the newNode**/
        LL->tail= newNd;
    }

    LL->countNode++;

}

void removeFirst(LinkedList *LL)
{
    if(isEmpty(LL)==1)
    {
        printf("Linked list is Empty\n");
    }
    else
    {
        Node *nodeValue;
        nodeValue = LL->head;
        LL->head = LL->head->next;
        LL->head->prev = NULL;     
        free(nodeValue);  
    }
    LL->countNode--;
}

void removeLast(LinkedList *LL)
{
    if(isEmpty(LL)==1)
    {
        printf("Linked List is emtpy\n");
    }
    else
    {
        Node *nodeValue;
        nodeValue = LL->tail;
        LL->tail = LL->tail->prev;
        LL->tail->next = NULL;
        free(nodeValue);
    }
    LL->countNode--;
}
void printList(LinkedList *LL, void (*fptr)(void *))
{
    if(isEmpty(LL)==1)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        Node *iterator;
        iterator = LL->head;
        while(iterator->next != NULL)
        {
            (*fptr)(iterator->value);
            iterator = iterator->next; 
        }
    }
}

void printInt(void *data)
{
    printf("%d\n", *(int *)data);
}
void printFloat(void *data)
{
    printf("%f\n",*(float *)data);
}
void printString(void *data)
{
    printf("%s\n",(char *)data);
}
int getNodeCount(LinkedList *LL)
{
    return (int)LL->countNode;
}
int isEmpty(LinkedList *LL)
{
	int isEmpty = 0;
	if(LL->head == NULL && LL->tail == NULL)
	{
		isEmpty = 1;
	}
	return isEmpty;
}
void freeList(LinkedList *LL)
{
    Node* node;
    Node* prevNode;
    node = LL->head;
    while(node->next != NULL)
    {
        prevNode = node;
        free(prevNode);
        node = node->next;
    }
    free(LL);  
}
