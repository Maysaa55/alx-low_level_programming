#include"main.h"


int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == 0)
		return (-1);
	fp = fopen(filename, "w");
	fprintf(fp, "%s\n", text_content);
	if (fp == 0)
		return (-1);
	fclose(fp);
	return (1);
}

