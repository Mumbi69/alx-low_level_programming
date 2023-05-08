#include <stdio.h>
#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file to append to
* @text_content: Text to append to the file
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
