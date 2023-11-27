#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * 0 if file cannot be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char c;
size_t counter;

counter = 0;
if (filename == 0)
	return (0);
else
{
	fp = fopen(filename, "r");
	if (fp == 0)
		return (0);
	while ((c = fgetc(fp)) != EOF && counter <= letters)
	{
		write(1, &c, 1);
		counter++;
	}
	fclose(fp);
	return (counter);
}
}

