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
 int range ;
 int i;
 int *arr ;
 if (min > max)
 return (0);
 range = max - min + 1;
 arr = malloc(sizeof(int)*range);
 arr[0] = min;
 if(min == max)
  return (arr) ;
 for (i = 1; arr[i] <= max; i++){
  arr[i] = min + 1;
  min += 1 ;
 }
 return (arr);
 return (0);
}


