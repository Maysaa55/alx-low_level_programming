#include "3-calc.h"

int (*get_op_func(char *s))(int, int){
	char oper = {+ , - , * , \ , % } ;
	int (*funcptr[])(int, int) = { op_add , op_sub , op_mul , op_div , op_mod };
	int i ;
	i = 0 ;
	while(i < 5){
	if (oper[i] == s)
	return funcptr[i] ;
	i** ;
	}
	return NULL ;

}

