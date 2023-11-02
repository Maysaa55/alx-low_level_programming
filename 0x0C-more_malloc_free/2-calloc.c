#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calloc - create an array
 * @nmemb: the number of the array's element
 * @size: the size of the array
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
 if (nmemb == 0 || size == 0)
 return NULL ;
 return (void*)malloc(nmemb * size);
 return NULL ;
}

