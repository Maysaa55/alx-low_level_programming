#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - create a new dog 
 * @d: a pointer to a dog struct 
 * @name: the name of the owner
 * @age:the initialize age of the dog
 * @owner: the initialized name of the dog's owner
 *
 * Description - longer 
 *
 **/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = *(src + j);
	}
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner){
dog_t* dogg ;
dogg = malloc(sizeof(struct dog));
if(dogg!=NULL){
char* cpyname = _strcpy(cpyname,name) ;
char* cpyowner = _strcpy(cpyowner,owner);
dogg->name = name ;
dogg->owner = owner ;
dogg->age = age ;
		return dogg ;
}
	else 
		return NULL ;

}

