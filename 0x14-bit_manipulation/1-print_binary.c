#include"main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 *
 * Return: No return
 *
 */
void print_binary(unsigned long int n)
{
	int i, count;
	count = 0;
	for(i = 15; i >= 0; i--)
		{
			if (((n >> i)&1) == 0)
				count++;
			else if ((((n >> i)&1) == 0) && count > 0)
				write(1, & 48, 1);
			else if (((n >> i)&1) == 1)
			write(1, & 49, 1);
		}
	_putchar('\n');
}
