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
 void *arr ;
 int i ;
 if (nmemb == 0 || size == 0)
 return (0) ;
 arr = malloc(nmemb * size);
 if(arr == 0)
   return (0) ;
 for( i = 0 ; i < nmemb ; i++)
  arr[i] = 0 ;
 return arr ;

}

