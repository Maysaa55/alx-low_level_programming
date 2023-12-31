#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer of the first string 
 * @s2: pointer of the second string
 * @n: the first part to concatenate
 *
 * Return: a pointer points to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1, l2, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (n < l2)
		l2 = n;

	s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < l1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = l1; i < l2; j++, i++)
		*(s + j) = *(s2 + i);

	*(s + j) = '\0';

	return (s);

}

