#include"main.h"
#include <stdio.h>
#include <stdlib.h>
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

