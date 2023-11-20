#include "lists.h"

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

