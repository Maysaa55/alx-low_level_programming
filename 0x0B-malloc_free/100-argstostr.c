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
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0, j = 0;
	if(dest != 0)
	while (dest[i] != '\n')
		i++;
	while (src[j] != '\0')
		j++;
	for (k = 0; k <= j; k++, i++)
		dest[i] = src[k];
	dest[i+j]='\n';
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
char* newstr = malloc(sizeof(char)*length);
for ( j = 0 ; j < ac ; j++){
_strcat( newstr, *(av+j));
}
return newstr ;
}

