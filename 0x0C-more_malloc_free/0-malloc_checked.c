#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - creates allocated memory
 * @b: the size of memory in bytes
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
 void* s ;
 
 s = (void*)malloc(b);
 if(s == 0)
      exit(98);
 return (s);
}

