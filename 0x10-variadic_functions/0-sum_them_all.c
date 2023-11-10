#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...){
	if(n==0)
		return 0 ;
	va_list ptr ;
	unsigned int i ;
	int sum = 0 ;
	va_start(ptr,n);
	for (i = 0 ; i < n ; i++)
		sum += va_args(ptr , int );
	va_end(ptr);
	return sum ;

}

