#include"main.h"
#include<stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
  if (b == 0)
    return (0);
  else
  {
    int sum, len, counter, i;

    sum = 0; len = 0; counter = 1;
    while (b[len] != '\0')
     len++;
    if (b[len - 1] == '1')
     sum = 1;
    for (i = len - 2; i >= 0; i--)
 {
     if (b[i] == '1')
  {
    sum += (2 * counter);
    counter *= 2;
  }
    else if (b[i] == '0')
     counter *= 2;
    else
     return (0);
 }
    return (sum);
  }
  return (0);
}
