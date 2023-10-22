#include "main.h"

/**
 * _strlen - swaps two values
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int length = 0;

		while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
