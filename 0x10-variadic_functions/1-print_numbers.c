#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...){
unsigned int i ;
va_list ptr ;
va_start(ptr,n);
  if(separator == NULL)
    separator ="";
for(i = 0 ; i < n-1 ; i++){
printf("%i%s",arg(ptr,int),separator);
}
printf("%i\n",arg(ptr,int);
va_end(ptr);
}

