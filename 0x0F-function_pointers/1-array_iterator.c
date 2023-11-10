#include"function_pointers.h"

/*
 * array_iterator - iterates a function through the array elements .
 * @array: pointer to the array .
 * @size: the size of the array .
 * @action: the function which will be iterated .
 *
 * Return - nothing .
 **/
void array_iterator(int *array, size_t size, void (*action)(int)){
if (action != 0 && size >= 1 && array != 0){
int k ;
for(k = 0 ; k < size ; k++)
	action(array[k]);
}
}

