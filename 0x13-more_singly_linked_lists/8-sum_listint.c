#include "lists.h"

/**
 * sum_listint - sums the elements of the list
 * @head: the list's head pointer
 *
 * Return - the sum of all the elements
 */
int sum_listint(listint_t *head)
{
	int counter;

	counter = 0;
	while(head != 0)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}

