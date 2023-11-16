#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */

size_t print_list(const list_t *h){
unsigned int counter ;
counter = 0;
while (h != NULL){
counter ++;
if (h->str == NULL)
printf("[0] (nil)");

else 
printf("[%i] %s\n",h->len,h->str); 

h = h->next;
}
return (counter);
}

