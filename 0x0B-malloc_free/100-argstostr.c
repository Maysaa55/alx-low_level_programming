#include"main.h"
#include<stdio.h>
#include<stdlib.h>
int _strlen(char *s)
{
	int length = 0;

		while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0, j = 0;
	while (dest[i] != '\n')
		i++;
	while (src[j] != '\0')
		j++;
	if (n < j)
		j = n - 1;
	for (k = 0; k <= j; k++, i++)
		dest[i] = src[k];
	dest[i + 1] = '\n';
	return (dest);
}
char *argstostr(int ac, char **av){
int i ;
int j ;
int length = 0 ;
if (ac == 0 || av == NULL)
 return NULL ;
for (i = 0 ; i < ac ; i++){
length += _strlen(*(av+i));
}
length += ac ;
char* newstr = malloc(sizeof(char)*(length+ac));
for ( j = 0 ; j < ac ; j++){
_strcat( newstr, *(av+j));
}
return newstr ;
}
