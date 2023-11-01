#include"main.h"
#include<stdio.h>
#include<stdlib.h>
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	for (k = 0; k <= j; k++, i++)
		dest[i] = src[k];
	return (dest);
}
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = *(src + j);
	}
	return (dest);
}
int _strlen(char *s)
{
	int length = 0;

		while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
char *str_concat(char *s1, char *s2){
int length1 = _strlen(s1);
int length2 = _strlen(s2);
int length = length1 + length2 ;
char* newcon = _strcat(s1 , s2 );
char *newstr = malloc(sizeof(char)*(length+1));
newstr = _strcpy(newstr,newcon);
return newstr ;
}

