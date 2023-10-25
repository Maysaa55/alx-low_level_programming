#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes to search
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	int length, length2, i, j;

	length = 0, length2 = 0;
	while (s[length] != '\0')
		length++;
	while (accept[length2] != '\0')
		length2++;
	for (i = 0; i < length; i++, s++)
	{
		for (j = 0; j < length2; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
	}
	return (0);
}
