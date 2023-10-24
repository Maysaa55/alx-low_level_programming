#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: matrix
 * @size: size of matrix
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
int i , j ;
int sum = 0 ;
for (i = 0 ; i < size ; i++){
	sum += a[i][i] ;}
	printf("%i,",sum)
		sum = 0 ;
for (j = 0 ; j < size ; j++){
	sum += a[j][size-j-1];}
printf("%i\n",sum);
}
