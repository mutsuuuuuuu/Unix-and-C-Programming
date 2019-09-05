#include <stdio.h>

int Power()
{
    int static pow = 0;
    pow += 2;
    return pow;
}
