#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...){
unsigned int i ;
char * str;
va_list ptr ;
char tmp[] = "(nil)";
va_start(ptr,n);
if(n != 0){
for(i = 0 ; i < n-1 ; i++ ){
	str = va_arg(ptr,char*);
	if (str == NULL)
	  str = tmp;
	if(separator == NULL)
		printf("%s",str);
	else 
        printf("%s%s",str,separator);
		}
printf("%s\n",va_arg(ptr,char*));
}
va_end(ptr);
}

