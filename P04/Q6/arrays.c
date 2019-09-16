#include "arrays.h"
#include "string.h"
#include "stdlib.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
    int arr_size = 10;
    if (argc < 2)
    {
        printf("The command line argument is less than 2\n");
    }
    else
    {
        int *arr = (int *)malloc(sizeof(int)*arr_size);
        int i;
        for(i = 0; i<10; i++)
        {
            arr[i] = i*4;
        }
        if(strcmp(argv[1], "sum") == 0)
        { 
        int total = sum(arr,arr_size);
        printf("%d\n",total);
        }
        else if (strcmp(argv[1],"max") == 0)
        {
        int ind = max(arr,arr_size);
        printf("%d\n",ind);
        }
        else if (strcmp(argv[1],"reverse") == 0)
        {
            reverse(arr,arr_size);
        }
        else
        {
            printf("invalid command line argument\n");
        }
        free(arr);
    }
    return 0;
}

int sum(int *arrays, int length)
{
    int i,sum=0;
    for(i = 0; i < length; i++)
    {
        sum += arrays[i];
    }

    return sum;
}

int max(int *arrays, int length)
{
    int i, max, index;
    max = arrays[0];
    index = 0;
    for(i = 1; i<length; i++)
    {
        if(arrays[i] > max)
        {
            max = arrays[i];
            index = i;
        }
    }

    return index;
}

void reverse(int *arrays, int length)
{
    int revIndex = 0;
    int arrayIndex = length - 1;
    int temp,i;
    while (revIndex < arrayIndex)
    {
        temp = arrays[revIndex];
        arrays[revIndex] = arrays[arrayIndex];
        arrays[arrayIndex] = temp;

        revIndex++;
        arrayIndex--;
    }
    for (i = 0; i < length; i++)
    {
        printf("%d\t",arrays[i]);
    }
}
