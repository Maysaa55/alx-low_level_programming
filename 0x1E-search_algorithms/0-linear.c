#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
size_t ind;
if (array == 0)
	return (-1);
for (ind = 0; ind < size; ind++)
{
	printf("Value checked array[%lu] = [%d]\n", ind, *(array + ind));
	if (*(array + ind) == value)
	{
		return (ind);
	}
}
return (-1);
}
