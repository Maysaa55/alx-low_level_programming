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
 int length1;
 int length2;
 int k;
 int j;
 char *str ;
 length1 = 0;
 length2 = 0;
 if (s1 == NULL)
 *s1 = '\0' ;
 if(s2 == NULL)
  *s2 = '\0' ;
 while (*(s1 + length1) != '\0')
  length1++;
  while (*(s2 + length2) != '\0')
  length2++;
 str = (char*)malloc(sizeof(char)*(length1 + n + 1));
  if(str == 0)
   return (0) ;
 for (k = 0; k < length1 ; k++)
  str[k] = s1[k];
 for (j = 0; j < n; j++)
 str[length1 + j] = s2[j] ;
 str[length1 + n] = '\0';
 return (str);
 
}

