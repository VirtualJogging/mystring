#include "strcpy.h"

char *strcpy(char *destenation, const char *source)
{
    int i;
    for(i = 0; source[i] != EOF; i++)
        destenation[i] = source[i];
    return source;
}