#include <stdio.h>
/**
 * main - starts of the program and call the function
 * return : is 0
 * reset_to_98- update the variable's value to 98
 * ip - is the parameter of integer pointer type points to te value
 */
void reset_to_98(int *ip);

int main(void)
{
int num = 402;
int *ptr = &num;
reset_to_98(ptr);
printf("the value of num after resetting : %i\n", num);
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
