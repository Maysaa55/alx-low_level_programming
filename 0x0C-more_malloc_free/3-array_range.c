#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of range of numbers
 * @max: the maximum vakue in the array
 * @min: the minimum value in the array
 *
 * Return: a pointer.
 */
int *array_range(int min, int max)
{
 if (min > max)
    return NULL;
 int range ;
 int i;
 int *arr ;
 range = max - min + 1;
 arr = (int*)malloc(range);
 arr[0] = min;
 for (i = 1; arr[i] <= max; i++)
 arr[i] = min + 1;
 return arr;
 return NULL;
}

