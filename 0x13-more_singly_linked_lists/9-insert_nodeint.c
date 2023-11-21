#include "lists.h"


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	int i;
	temp = malloc(sizeof(listint_t));
	if (temp == 0)
		return (0);
	for (i = 0; i < idx-1; i++)
	{i
		if (head == 0)
			return (0);
		head = head->next;
	}
	temp->n = n;
	temp->next = head->next;
	head->next = temp;
	return (temp);
}

