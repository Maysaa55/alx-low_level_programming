#include"lists.h"
#include<stdio.h>
#include<stddef.h>

/**
 * print_listint - print a list of integers
 * @h: the header pointer to the list
 *
 * Return - the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int count;
	count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

