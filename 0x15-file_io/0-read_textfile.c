#include "main.h"

/**
 * ssize_t read_textfile - reads the text file and print it
 * @filename: points to the file's name
 * @letters: the number of letters to print
 *
 * Return - the number of the letters it could read and print
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
		write(1,&c,1);
		counter++;
	}
	fclose(fp);
	return (counter);
}
}

