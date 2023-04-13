#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: ...
* @max: ...
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
