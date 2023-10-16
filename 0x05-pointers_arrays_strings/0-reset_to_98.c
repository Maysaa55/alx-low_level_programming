#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 */
void reset_to_98(int *n)
{
	*n = 98;
}
void reset_to_98(int *ip);

int main(void)
{
int num = 402;
printf("n=%d\n", num);
reset_to_98(&num);
printf("n=%d\n", num);
return (0);
}
void reset_to_98(int *ip)
{
/**
 * reset_to_98- update the variable's value to 98
 * ip - is the parameter of integer pointer type points to te value
 */
*ip = 98;
}
