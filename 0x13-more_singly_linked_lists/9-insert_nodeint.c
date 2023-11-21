#include "lists.h"


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	int i;
	temp = malloc(sizeof(listint_t));
	if (temp == 0)
		return (0);
	temp->n = n;
	 if (*head == 0)
                {
                        temp->next = 0;
                        *head = temp;
                        return (temp);
                }
	 else if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	else 
	{
	for (i = 0; i < idx ; i++)
	{
		if (*head == 0)
		{
			return (0);
		}
		*head = *head->next;
	}
	temp->next = *head->next;
	*head->next = temp;
	return (temp);
	}
}

