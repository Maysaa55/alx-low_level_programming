#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer of the first string 
 * @s2: pointer of the second string
 * @n: the first part to concatenate
 *
 * Return: a pointer points to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
 int length;
 int k;
 int j;
char *str ;
 length = 0;
 while (*(s1 + length) != '\0')
  length++;
 str = (char*)malloc(sizeof(char)*(length + n + 1));
 if(str == 0)
  return 98 ;
 for (k = 0; k < length; k++)
  *(str+k) = *(s1+k);
 for (j = 0; j < n; j++)
 *(str+length+j) = *(s2+j);
 *(str+length+n) = '\0';
 return str;
}

