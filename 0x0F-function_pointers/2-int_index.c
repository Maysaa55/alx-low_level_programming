#include"function_pointers.h"

/**
 * int_index - function returns an index where a specific element is .
 * @array: a pointer of array of integers .
 * @size: the array's elements number .
 * @cmp: the comparing function .
 *
 * Return - the searched for element's index or -1 if not found .
 */
int int_index(int *array, int size, int (*cmp)(int)){
	
	 if (array != 0 && size > 0 ){
	        int i ;
		for(i = 0 ; i < size ; i++){
		if(cmp(array[i])
			return i ;
		}
	}
	return -1 ;
}

