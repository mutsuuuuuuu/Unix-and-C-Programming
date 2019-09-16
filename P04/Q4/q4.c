#include <stdio.h>
#include "q4.h"

int main(void)
{
   int array[] = {4,2,4,1};
    int len = 4;
    
    printArray(array,len);

    return 0;
}

void printArray(int array[], int length)
{
    printf("{");
    int i;
    for (i = 0; i<length; i++)
    {
        if(i != length - 1)
        {
            printf("%d, ",array[i]);
        }
        printf("%d",array[i]);
    }
    printf("}\n");
}
