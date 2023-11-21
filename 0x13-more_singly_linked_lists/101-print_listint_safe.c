#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	int count;
        listint_t const *tmp;
	tmp = head;
	count = 0;
	while(tmp != NULL)
	{
		count++;
		printf("[%p]%d\n",tmp, tmp->n);
		tmp = tmp->next;
	}
	return (count);
}

