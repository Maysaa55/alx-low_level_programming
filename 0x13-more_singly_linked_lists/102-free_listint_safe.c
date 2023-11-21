#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	int count;
	count = 0;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
			count++;
		}
	}
return (count);
}

