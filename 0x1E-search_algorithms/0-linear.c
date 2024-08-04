#include "search_algos.h"

int linear_search(int *array, size_t size, int value){
size_t ind ;
if(array == 0)
	return -1;
for(ind = 0; ind < size; ind++)
{
	printf("Value checked array[%d] = [%d]\n", ind, *(array+ind));
	if(*(array+ind) == value)
	{
		printf("Found %d at index: %d\n", value, ind);
		return ind;

	}
}
return -1;
}
