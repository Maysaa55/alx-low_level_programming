#include<stdlib.h>
#include"dog.h"
#include<stdio.h>

/**
 * print_dog - prints the parameters of the dog struct
 * @d: struct pointer points to the printed struct
 **/
void print_dog(struct dog *d){
if (d != NULL){
char* tmp = "(nil)" ;
if(d->name == NULL)
 d->name = tmp ;
printf("Name: %s",d->name);
printf("Age: %f",d->age);
if(d->owner == NULL)
 d->owner = tmp ;
printf("Owner: %s",d->owner);
}
}

