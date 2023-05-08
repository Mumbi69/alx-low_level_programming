#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - reads a text file and prints
* @filename: ...
* @letters: ...
*
* Return: return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	bytes_written = fwrite(buffer, 1, bytes_read, stdout);
	if (bytes_written != bytes_read)
	{
		fclose(0);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytes_read);
}
