#include "lists.h"

size_t list_len(const list_t *h){
unsigned int length ;
length = 0;
while(h != NULL){
length ++ ;
h = h->next;
}
return length;
}

