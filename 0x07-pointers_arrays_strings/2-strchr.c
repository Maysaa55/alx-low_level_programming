#include "main.h"

/**
 * _strchr - eturns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: memory area
 * @c: constant byte b
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{int i=0;
int j;
while(s[i] != '\0'){
i++;}
for(j=0;j<=i;j++,s++){
if (*s==c)
return(s);}
return(0);}
