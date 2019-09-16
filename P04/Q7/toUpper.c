#include <stdlib.h>
#include <stdio.h>
#include "toUpper.h" 
int main(int argc, char *argv[])
{  
    printf("%c\n",*argv[1]);
    toUpper(argv[1]);
    printf("%c\n",*argv[1]);
    return 0;
}
void toUpper(char *input)
{
    if(*input >= 'a'&& *input <= 'z')
    {
        *input = *input - 32;
    }

}   
