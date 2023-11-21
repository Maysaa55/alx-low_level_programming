#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	if (head->next == 0)
	{
		printf("%d\n",head->n);
		temp = head;
		free(head);
		return (temp);
	}
	else 
		return (reverse_listint(head->next));

}

