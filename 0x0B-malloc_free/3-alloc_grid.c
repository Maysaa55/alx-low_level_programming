#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * alloc_grid-create a 2d array of integers with initial value 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: int pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, fr;

	fr = 0;
	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(height * sizeof(int *));
	if (arr == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(width * sizeof(int));
		if (*(arr + i) == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(arr + k));
		}
		free(arr);
	}
	return (arr);
}
