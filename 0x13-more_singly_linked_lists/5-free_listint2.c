#include "lists.h"
/**
 * free_listint2 - print a list of integers
 * @head: the header pointer to the list
 *
 * Return - nothing
 */
void free_listint2(listint_t **head)
{
	if (head == 0)
	 head = NULL;
	free_listint(head->next);
	free(head);		
}

