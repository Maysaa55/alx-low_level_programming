#include "lists.h"
/**
 * list_len - returns the number of nodes in the list 
 * @h: pointer 
 *
 * Return - the length of the list
 */

size_t list_len(const list_t *h){
unsigned int length ;
length = 0;
while(h != NULL){
length ++ ;
h = h->next;
}
return length;
}

