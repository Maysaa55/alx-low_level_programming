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
list_t *temp ;
counter = 0;
temp = h;

while (temp->next != NULL){
counter ++;
if (temp->str == NULL){
        printf("%s","[0] (nil)");
}
else {
printf("[%d] ",temp->len); 
printf("%s",temp->str);
}
temp = temp->next;
}
return (counter);
}
