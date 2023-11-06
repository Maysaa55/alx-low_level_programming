#include<stdlib.h>
#include"dog.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */

/**
 * print_dog - prints the parameters of the dog struct
 * @d: struct pointer points to the printed struct
 *
 * Description - longer one
 *
 **/
void print_dog(struct dog *d){
if (d != NULL){
char* tmp = "(nil)" ;
if(d->name == NULL)
printf("Name: %s\n",tmp);
 else
printf("Name: %s\n",d->name);
printf("Age: %f\n",d->age);
if(d->owner == NULL)
printf("Owner: %s\n",tmp);
 else
printf("Owner: %s\n",d->owner);
}
}

