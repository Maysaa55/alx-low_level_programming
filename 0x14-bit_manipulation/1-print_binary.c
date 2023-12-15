#include"main.h"
#include<stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 *
 * Return: No return
 *
 */
voir write_char(int str)
{
	write(1, &str, 1);
}
void print_binary(unsigned long int n)
{
	int i, count;
	count = 0;
	for(i = 15; i >= 0; i--)
		{
			if (((n >> i)&1) == 1)
				count++;
			else if ((((n >> i)&1) == 0) && count > 0)
				write_char(48);
			else if (((n >> i)&1) == 1)
					write_char(49);
		}
	write_char('\n');
}
