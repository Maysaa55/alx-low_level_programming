#include"main.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
 if (str == 0)
  return (0);
 int i = 0, j = 0;
 int count = 1;
 while (*(str + i) != '\0')
 {
  count += 1;
  i++;
 }
 char *s = malloc(sizeof(char) * count);
 for (j = 0; j < count; j++)
 {
  *(s + j) = *(str + j);
 }
 *(s + count) = '\0';
 return s;
}

