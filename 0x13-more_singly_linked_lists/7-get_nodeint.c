#include "lists.h"

/**
 * get_nodeint_at_index - get the node in specific index
 * @head: pointer to the list's head
 * @index: the specific index 
 *
 * Return - the address of the specific node 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i;
	
	for (i = 0; i < index ; i++)
	{
		if (head == 0)
		       return (0);
		 head = head->next;
	}
	return (head);
}

