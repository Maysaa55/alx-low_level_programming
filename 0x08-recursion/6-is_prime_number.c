#include "main.h"

/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
 if ((n != 2 && n % 2 == 0)  (n != 3 && n % 3 == 0)  (n != 5 && n % 5 == 0)  (n != 7 && n % 7 == 0)  (n != 11 && n % 11 == 0))
  return 0;
 else
  return 1;
}
