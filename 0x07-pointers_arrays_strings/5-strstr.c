#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @haystack: string where to look
 * @needle: string to find
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
	int length = 0 ;
	int length2 = 0 ;
	int counter , i , j ;
	while(haystack[length] != '\0'){
		length++;
	}
	while(needle[length2] != '\0'){
		length2++;
	}
	for(i = 0 ; i < length ; i++ , heystack++){
		for(j = 0 , c = 0 ; j < length2 ; j++){
			if (heystack[j] == 0)
				break;
			if(heystack[j] == needle[j])
				counter++ ;
		}
		if(counter == length2)
			return(heystack);
	}
	return(0);
}
