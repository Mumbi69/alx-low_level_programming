#include <stdio.h>

/**
* main - main function
* @argc: number of arguments passed
* @argv: array of strings
* _args - prints all arguments it receives
*
* Return: 0
*/

#pragma GCC diagnostic ignored "-Wunused-parameter"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
