#include <stdio.h>
#include "order.h"

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void ascending2(int *num1, int *num2)
{
    if(*num1 > *num2)
    {
        swap(num1,num2);
    }
}

void ascending3(int *num1, int *num2, int *num3)
{
    if(*num1 > *num2)
    {
        swap(num1,num2);
    }
    else if(*num2 > *num3)
    {
        swap(num2,num3);
    }
    else if(*num1 > *num3)
    {
        swap(num1,num3);
    }
}

void descending3(int *num1, int *num2, int *num3)
{
    if(*num1 > *num2)
    {
        swap(num1,num2);
    }
    else if(*num2 > *num3)
    {
        swap(num2,num3);
    }
    else if(*num3 > *num1)
    {
        swap(num1,num3);
    }
}
