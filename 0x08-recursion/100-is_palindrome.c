#include"main.h"
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
bool equal(char a , char b){
  if (a == b)
    return 1 ;
  else 
    return 0 ;
}
int is_palindrome(char *s){
  int i = _strlen_recursion(s) ;
  if (i%2 == 0){
    
  }
}
