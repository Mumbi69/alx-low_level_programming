#include <stdio.h>
#include <stdlib.h>
/**
* main - main function
* @argc: number of arguments
* @argv: array of strings
* _mul - multiplies two numbers
*
* Return: 1
*/

int main(int argc, char *argv[])
{
	int m = atoi(argv[1]);
	int s = atoi(argv[2]);
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = m * s;
	printf("%d\n", mul);
	return (0);
}

