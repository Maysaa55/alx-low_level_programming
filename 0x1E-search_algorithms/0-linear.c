#include "search_algos.h"

int linear_search(int *array, size_t size, int value){
size_t ind ;
if(array == 0)
	return -1;
for(ind = 0; ind < size; ind++)
{
	printf("Value checked array[", ind, "] = [", *(array+ind), "]\n");
	if(*(array+ind) == value)
	{
		printf("Found ", value, "at index: ", ind, '\n');
		return ind;

	}
}
return -1;
}
