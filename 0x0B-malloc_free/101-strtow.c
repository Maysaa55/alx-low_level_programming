#include"main.h"
#include<stdio.h>
#include<stdlib.h>
char **strtow(char *str){
  int words ;
  int i ;
  int j , k ;
  char** arr ;
  int length ;
  words = 0 ; i = 0 ;
  while(str[i] != '\0'{
    if (str[i] == ' ')
      words += 1 ;
    i++;
  }
  words += 1 ;
  for ( j = 0 ; j < words ; j++ ){
    length = _strlen(*(str+j);
    for ( k = 0 ; k < length ; k++)
      
  }
}
