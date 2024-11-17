#include "strcount.h"

int strcount(char *str)
{
    int count = 0;
    while(str[count] != EOF)
        count++;
    return count;
}