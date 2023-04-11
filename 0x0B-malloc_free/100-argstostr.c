#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: ...
* @av: ...
*
*
* Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, pos = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

result = malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[pos++] = av[i][j];
		}
		result[pos++] = '\n';
	}
	result[pos] = '\0';
	return (result);
}
