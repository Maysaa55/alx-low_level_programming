#include "lists.h"
/**
 * free_listint - print a list of integers
 * @head: the header pointer to the list
 *
 * Return - nothing
 */
void free_listint(listint_t *head)
{
	if (head == 0)
		return;
	free_listint(head->next);
	free(head);
		
}

