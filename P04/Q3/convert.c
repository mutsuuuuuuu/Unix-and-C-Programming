#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *string[] = {"42","12","45","51"};
    int *array = (int*)malloc(sizeof(int)*4);
    int length = sizeof(string)/sizeof(string[0]);

    convertToint(string,array,length);

    return 0;
}

void convertToint(char *string[], int *arrays, int length)
{
    int i;
    printf("String | Integer\n");
    for(i = 0; i<length; ++i)
    {
        arrays[i] = atoi(string[i]);
        printf("%s | %d\n", string[i],arrays[i]);
    }
}

