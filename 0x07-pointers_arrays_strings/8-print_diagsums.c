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
for (i = 0 , j = 0 ; i < size ; i++ , j += size){
	sum += *(a+(i+j));}
	printf("%i,",sum)
		sum = 0 ;
for (j = size-1 , i = 0 ; i < size ; i++ , j+= size-2){
	sum += *(a+(i+j));}
printf("%i\n",sum);
}
