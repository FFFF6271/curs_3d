#include "util.h"

void * xmalloc(unsigned int size)
{
    void *retval;
    if(!(retval = malloc(size)))
    {
        exit(-1);
    }
    return retval;
}