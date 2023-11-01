#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a copy for given string
 * @str: the pointer which points to the string
 *
 * Return: character pointer points to the new string
 */
char *_strdup(char *str)
{
 int i ;
 int j ;
 int count ;
 char* s ;
 if (str == NULL)
  return NULL;
 count = 0 ;
 while (str[i] != '\0')
 {
  count += 1;
  i++;
 }
 s = malloc(sizeof(char) * (count+1));
 for (j = 0; j <= count; j++)
 {
  s[j] = str[j];
 }
 return s;
 if (j < count-1)
  return NULL ;
}

