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
				_putchar(48);
			else if (((n >> i)&1) == 1)
			_putchar(49);
		}
	_putchar('\n');
}
