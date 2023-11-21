#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	int count;
	count = 0;
	while(head != NULL)
	{
		count++;
		printf("[%p]%d\n",head, head->n);
		head = head->next;
	}
	return (count);
}

