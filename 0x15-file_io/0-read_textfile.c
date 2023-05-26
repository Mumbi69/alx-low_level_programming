#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints
* @filename: the name of the file
* @letters: no. of characters to read
*
* Return: return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t byr, byw;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	byr = read(f, buffer, letters);
	byw = write(STDOUT_FILENO, buffer, byr);

	close(f);

	free(buffer);

	return (byw);
}
