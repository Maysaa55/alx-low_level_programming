#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 */

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
*ip = 98;
}
