#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc , char* argv[])
{
char* str = argv[0];
  while(str != '\0'){
    _putchar(*str);
    s++ ;
  }
  _putchar('\n');
return 0 ;
}
