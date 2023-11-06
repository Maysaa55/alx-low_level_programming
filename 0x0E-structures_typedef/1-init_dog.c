#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - initialize a struct dog 
 * @d: a pointer to a dog struct 
 * @name: the name of the owner
 * @age:the initialize age of the dog
 * @owner: the initialized name of the dog's owner
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


