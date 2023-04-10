#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: no. of arguments
* @argv: array of strings
* _add - adds positive numbers
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
