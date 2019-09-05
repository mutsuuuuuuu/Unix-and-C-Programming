#include <stdio.h>
int main()
{
    int firstVal;
    int secondVal;
    printf("This is a calculator to check whether the first integer is divisible by the second integer\n");
    printf("Please enter the first integer\n");
    scanf("%d", &firstVal);
    printf("Please enter the second integer\n");
    scanf("%d", &secondVal);
    if(firstVal % secondVal == 0)
    {
        printf("%d is divisible by %d\n",firstVal,secondVal);
    }
    else
    {
        printf("%d is not divisible by %d\n",firstVal,secondVal);
    }
    return 0;
}
