#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
 if (min > max)
  return NULL;
 int range = max - min + 1;
 int i;
 int *arr = (int *)malloc(range);
 arr[0] = min;
 for (i = 1; arr[i] <= max; i++)
  arr[i] = min + 1;
 return arr;
 return NULL;
}

