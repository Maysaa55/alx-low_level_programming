#include "lists.h"
#include<string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */

char *_strdup(const char *str)
{
	int l = 0, i;
	char *s;

	if (str == NULL)
		return (0);

	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= l; i++)
		*(s + i) = *(str + i);
	return (s);
}
/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: pointer to head of singly linked list
 * @str: string to add as new node in list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str){
list_t temp ;
temp =malloc(sizeof(list_t));
temp->str = _strdup(str);
temp->len = strlen(str);
temp->next = head ;
*head = temp ;
return temp;
}

