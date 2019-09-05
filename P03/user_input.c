#include <stdio.h>
#include "order.h"

int main()
{
    int a,b,c;
    char one;
    
    int *num1, *num2, *num3;
    char *ex;

    printf("Enter the first number\n");
    scanf("%d",&a);
    num1 = &a;

    printf("Enter the second number\n");
    scanf("%d",&b);
    num2 = &b;

    printf("Enter the third number\n");
    scanf("%d",&c);
    num3 = &c;
    
    printf("Enter a char\n");
    scanf(" %c",&one);
    ex = &one;

    printf("number 1: %d, number 2: %d, number 3: %d, char: %c\n",*num1,*num2,*num3,*ex);
    ascending3(num1,num2,num3);
    printf("number 1: %d, number 2: %d, number 3: %d\n",*num1,*num2,*num3);

    return 0;
}
