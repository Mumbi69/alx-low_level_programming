#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function.
* @argc: ...
* @argv: ...
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

unsigned char *p = (unsigned char *)&main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(p + i));
	}
	printf("\n");

	return (0);
}
