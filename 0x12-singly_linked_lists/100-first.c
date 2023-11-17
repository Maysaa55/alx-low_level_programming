#include <stdio.h>

void msg(void)__attribute__((constructor));
/**
 * printbefore - prints a message 
 *
 * Return - no thing
 */
void printbefore(){
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

