#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
 int length;
 int k;
 int j;

 length = 0;
 while (*(s1 + length) != '\0')
  length++;
 char *str = (char *)malloc(length + n + 1);
 for (k = 0; k < length; k++)
  str[k] = s1[k];
 for (j = 0; j < length + n; j++)
  str[length + j] = s2[j];
 str[length + n] = '\0';
 return str;
}

