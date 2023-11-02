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
 if(min == max){
  arr = (int *)malloc(sizeof(int)*2);
  arr[0] = min ;
  arr[1] = min ;
  return (arr) ;
 }
 range = max - min + 1;
 arr = (int *)malloc(sizeof(int)*range);
 if(arr == 0)
  return (0);
 arr[0] = min;
 for (i = 1; arr[i] <= max; i++){
  arr[i] = min + 1;
  min += 1 ;
 }
 return (arr);
}


