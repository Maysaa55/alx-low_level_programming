#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...){
unsigned int i ;
va_list ptr ;
va_start(ptr+1,n);
for(i = 0 ; i < n ; i++){
if(separator == NULL)
printf("%i\n",arg(ptr,int);
else 
printf("%i%s",arg(ptr,int),separator);
}
va_end(ptr);
}

