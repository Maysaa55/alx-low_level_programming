#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
 if (nmemb == 0 || size == 0)
 return NULL ;
 return (void*)malloc(nmemb * size);
 return NULL ;
}

