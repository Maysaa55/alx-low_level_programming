#include "lists.h"
#include<stdio.h>
#include<stddef.h>
size_t print_listint_safe(const listint_t *head)
{
	int count;
       const listint_t *tmp;
	tmp = head;
	count = 0;
	while(tmp != NULL)
	{
		count++;
		printf("[%p]%d\n",(void *)tmp, tmp->n);
		tmp = tmp->next;
	}
	return (count);
}

