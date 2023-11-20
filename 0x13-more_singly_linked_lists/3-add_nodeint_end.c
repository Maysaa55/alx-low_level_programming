#include "lists.h"

/**
 * add_nodeint_end - adds node to the of the list
 * @head: pointer to the list head
 * @n: the new node element
 *
 * Return - the address of the added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;
	temp = *head ;
	ptr = malloc(sizeof(listint_t));
	if (ptr == 0)
		return (0);
	if (temp->next != 0)
	{
	while(temp != 0)
	{
		temp = temp->next;
	}
	
	ptr->n = n;
	temp->next = ptr;
	}
	else 
	{
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
	}
	return (ptr);

}

