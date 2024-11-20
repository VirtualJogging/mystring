#include "strcpy.h"

char *strcpy(char *destenation, const char *source)
{
    int destenation_size = strcount(destenation);
    int source_size = strcount(source);
    if(source_size > destenation_size){
        int i;
        for(i = 0; source[i] != EOF; i++)
        destenation[i] = source[i];
    }
    else
        return 1;
   
    return source;
}