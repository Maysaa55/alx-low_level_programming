#include "lists.h"
/**
 * free_listint2 - print a list of integers
 * @head: the header pointer to the list
 *
 * Return - nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}

}
