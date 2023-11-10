#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...){
unsigned int i , k ;
va_list ptr ;
va_start(ptr,n);
for(i = 1 , k = 0 ; i < n ; k++ , i++){
if(separator[k] == NULL)
printf("%i\n",arg(ptr,int);
else 
printf("%i%s",arg(ptr,int),separator[k])
}
va_end(ptr);
}

