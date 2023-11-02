#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of initial character c of the size 'size'
 * @size: the size of the array
 * @c: the initial value for the array's members
 *
 * Return: character's pointer points to the created array 
 */
char *create_array(unsigned int size, char c)
{
 char* str = malloc(sizeof(char)*size);
 unsigned int i;

 if (size != 0)
 {
  for (i = 0; i < size; i++)
  {
   str[i] = c;
  }
 }
 else
 {
  return NULL;
 }
 return str;
}

