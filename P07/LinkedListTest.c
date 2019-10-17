
/*
 * ABOUT: LINKED LIST TEST HARNESS FOR UCP PRAC7
 * FILE CREATED : WEDNESDAY, 2 OCTOBER 2019
 * AUTHOR : MUTSU
 *
 *
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedListTest.h"
#include "LinkedList.h"
#include "ListNode.h"

int main(void)
{

    /**Make new LinkedList**/
    LinkedList* newList = NULL;
    char *data= (char*)malloc(sizeof(char));
    char *input =(char*)malloc(sizeof(char)*6);
    char *input2= (char*)malloc(sizeof(char)*4);

    strncpy(input,"hello",6);
    strncpy(input2,"bye",4);
    
    /**create the linkedlist**/
    printf("Creating List:");
    newList = createLinkedList();
    if(newList == NULL || newList->head != NULL)
    {
        printf("Failed\n");
    }
    else
    {
        printf("Passed\n");
    }
    
    printf("testing isEmpty: ");
    printf("LINKED LIST SHOULD BE EMPTY\n");
    if(isEmpty(newList))
    {
        printf("Linked list is empty -> ");
        printf("PASSED\n");
    } 
    else
    {
        printf("Linked list is not empty\n");
        printf("FAILED\n");
    }
    /**Inserting First**/
    printf("Inserting First:");
    insertFirst(input,newList);
    if(newList->head==NULL)
    {
        printf("FAILED\n");
    }
    else if(strncmp((char*)newList->head->value, input,strlen(input)+1)==0)
    {
        printf("PASSED\n");
    }
    else
    {
        printf("failed\n");
    }
    printf("Insert First:");
    insertFirst(input,newList);
    if(newList->head==NULL)
    {
        printf("FAILED\n");
    }
    else if (strncmp((char*)newList->head->value, input,strlen(input)+1)==0)
    {
        printf("Passed\n");
    }
    else
    {
        printf("failed\n");
    }

    /**Insert Last**/
    printf("Inserting Last:");
    insertLast(input,newList);
    if(newList->head==NULL)
    {
        printf("FAILED\n");
    }
    else if(strncmp((char*)newList->tail->value,input,strlen(input)+1)==0)
    {
        printf("PASSED\n");
    }
    else
    {
        printf("FAILED\n");
    }

    /**Remove First**/
    printf("Remove First:");
    removeFirst(newList);
    if(getNodeCount(newList) == 2)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }

    /**remove Last**/
    printf("Remove Last:");
    removeLast(newList);
    if(getNodeCount(newList) == 1)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }
    insertLast(input,newList);
    insertLast(input2,newList);
    printf("Printing the content of the node:\n");
    printList(newList,printString);
    
    /**Testing Accessor**/
    printf("Count Node:");
    printf("%d\n",getNodeCount(newList));


    freeList(newList);
    free(data);
    free(input);
    free(input2);
    return 0;
}
