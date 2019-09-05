#include <stdio.h>
#include "calc2.h"

int main()
{
    
    int result, sequence;
    
    printf("enter the number of sequence\n");
    scanf("%d",&sequence);
    int i;
    for(int i=1; i<=sequence; i++)
        {
            result = Power();
        }
    printf("%d\n",result);


    return 0;
}
