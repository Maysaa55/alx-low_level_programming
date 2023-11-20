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
	if (head == 0)
		return (0);
	for (i = 0; i <= index, head != 0 ; i++, head = head->next)
	{
		if (i == index)
			return (head);
	}
	return (0);
}

