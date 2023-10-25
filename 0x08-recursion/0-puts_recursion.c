#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
 if (*s == '\0')
  putchar('\n');
 if (*s != '\0')
 {
  putchar(*s);
  _puts_recursion(++s);
 }
}
