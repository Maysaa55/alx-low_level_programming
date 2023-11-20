#include "lists.h"
/**
 * add_nodeint - add a node in the beginning of the list
 * @head: the head pointer
 * @n: the data to add
 *
 * Return - the struct pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	ptr = (listint_t*)malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = head;
	head = ptr ;
	if (ptr == 0)
		return (0);
	return (head);
}

