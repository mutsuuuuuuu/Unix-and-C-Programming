#include <stdio.h>
long int factorial(int n);
int main(void)
{
    int value;

    printf("This is a factorial calculator\n");
    printf("Please enter a postive integer\n");
    scanf("%d",&value);
    
    while(value < 0)
    {
        printf("You entered a negative number, please enter a positive integer\n");
        scanf("%d", &value);
    }
    printf("The factorial of %d is %li\n", value,factorial(value));

    return 0;
}

long int factorial (int n)
{
    int value = n,i; 

    long int result=1;
    
    if(value == 0)
    {
        result = 1;
    }
    else
    {
        for (i = 1; i <= value; i++)
        {
            result *= i;
        }
    }
    return result;
    
}
    
