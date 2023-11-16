#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h){
size_t counter ;
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

