#include"main.h"
#include<stdio.h>
#include<stdlib.h>
int **alloc_grid(int width, int height){
if (height <= 0 || width <= 0)
	return (0);
int** arr = malloc(sizeof(int)*height);
for(int i = 0 ; i < height ; i++){
*(arr+i) = malloc(sizeof(int)*width);
for (int j = 0 ; j < width ; j++){
arr[i][j] = 0 ;
}
}
return arr ;
}

