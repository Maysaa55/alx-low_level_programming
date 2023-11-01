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

char *argstostr(int ac, char **av){
int i ;
int j ;
int length1 ;
int count = 0 ;
int length = 0 ;
if (ac == 0 || av == NULL)
 return NULL ;
for (i = 0 ; i < ac ; i++){
length += _strlen(*(av+i));
}
length += ac ;
char* newstr = malloc(sizeof(char)*(length+ac));
for ( j = 0 ; j < ac ; j++){
length1 = _strlen(*(av+j));
for ( i = 0,k = count ; i < length1 ; i++,k++){
newstr[k]=*(*(av+j)+i));
}
newstr[k+1]='\n';
count += length1 ;
}
return newstr ;
}

