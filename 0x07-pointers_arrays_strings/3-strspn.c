#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 * @s: memory area
 * @accept: constant byte b
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int length, length2, i, j, byte;

	length = 0, length2 = 0, byte = 0;
	while (s[length] != '\0')
		length++;
	while (accept[length2] != '\0')
		length2++;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < lenth2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				byte += 1;
				break;
			}
		}
		if (j == l2)
			break;
	}
	return (byte);
}
