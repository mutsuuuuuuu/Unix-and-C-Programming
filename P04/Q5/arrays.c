#include "arrays.h"
#include "string.h"
#include "stdlib.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("The command line argument is less than 2\n");
    }
    else
    {
        int arr[LENGTH] = {12,31,34,43,15,86,43,14,3,8};
        if(strcmp(argv[1], "sum") == 0)
        { 
        int total = sum(arr);
        printf("%d\n",total);
        }
        else if (strcmp(argv[1],"max") == 0)
        {
        int ind = max(arr);
        printf("%d\n",ind);
        }
        else if (strcmp(argv[1],"reverse") == 0)
        {
            reverse(arr);
        }
        else
        {
            printf("invalid command line argument\n");
        }
    }
    return 0;
}

int sum(int arrays[LENGTH])
{
    int i,sum=0;
    for(i = 0; i < LENGTH; i++)
    {
        sum += arrays[i];
    }

    return sum;
}

int max(int arrays[LENGTH])
{
    int i, max, index;
    max = arrays[0];
    index = 0;
    for(i = 1; i<LENGTH; i++)
    {
        if(arrays[i] > max)
        {
            max = arrays[i];
            index = i;
        }
    }

    return index;
}

void reverse(int arrays[LENGTH])
{
    int revIndex = 0;
    int arrayIndex = LENGTH - 1;
    int temp,i;
    while (revIndex < arrayIndex)
    {
        temp = arrays[revIndex];
        arrays[revIndex] = arrays[arrayIndex];
        arrays[arrayIndex] = temp;

        revIndex++;
        arrayIndex--;
    }
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d\t",arrays[i]);
    }

}
