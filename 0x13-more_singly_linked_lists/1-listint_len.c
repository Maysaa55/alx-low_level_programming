#include "lists.h"

/**
 * listint_len - counts the length of the list 
 *@h: the header pointer of the list
 *
 * Return - the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int counter;
	counter = 0;
	while(h != 0)
	{
		counter += 1;
		h = h->next;
	}
	return (counter);
}

