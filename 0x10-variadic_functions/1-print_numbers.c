#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>

/**
 * print_numbers - prints the numbers passed as arguments.
 * @separator: the separater string between the numbers .
 * @n: the size or the count of the numbers to be printed .
 *
 * Return - nothing .
 */

void print_numbers(const char *separator, const unsigned int n, ...){
unsigned int i ;
va_list ptr ;
va_start(ptr,n);
if(n>0){
  if(separator == NULL)
    separator ="";
    
for(i = 0 ; i < n-1 ; i++){
printf("%d%s",va_arg(ptr,int),separator);
}
printf("%d\n",va_arg(ptr,int));
va_end(ptr);
}
if(n==0)
	printf('\n');
}

