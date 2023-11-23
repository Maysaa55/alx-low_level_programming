#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	int count;
	count = 0;

	if (h)
	{
		while (*h != 0)
		{
			tmp = *h;
			*h = tmp->next;
			free(tmp);
			count++;
		}
	}
return (count);
}

