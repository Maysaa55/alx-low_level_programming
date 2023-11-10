#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...){
unsigned int i ;
char tmp = "(nil)";
if(n != 0){
va_list ptr ;
va_start(ptr,n);
for(i = 0 ; i < n ; i++ ){
	char * str = va_arg(ptr,char*);
	if (str == NULL)
		str = tmp;
		if(separator == NULL)
		printf("%s",str);
		else 
                printf("%s%s",str,separator);
		}

}
va_end(ptr);
printf('\n');
}

