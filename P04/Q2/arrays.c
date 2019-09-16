#include "arrays.h"
#include <stdio.h>
int main(void)
{
    int arr[LENGTH] = {12,31,34,43,15,86,43,14,3,8};
    int total = sum(arr);
    printf("%d\n",total);
    int ind = max(arr);
    printf("%d\n",ind);

    reverse(arr);

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
