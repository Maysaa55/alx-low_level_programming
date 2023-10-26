#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int square(int a, int b)
{
 if (b * b == a)
  return b;
 else if (b * b < a)
  return square(a, b + 1);
 else
  return -1;
}
int _sqrt_recursion(int n)
{
 return square(n, 1);
}

int main()
{
 printf("%i", _sqrt_recursion(13));
}
