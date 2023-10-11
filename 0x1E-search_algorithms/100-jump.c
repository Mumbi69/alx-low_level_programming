#include "search_algos.h"

/**
* jump_search - Search for a value in a sorted array of integers, Jump search.
* @array: a pointer to the first element of the array to search in
* size is the number of elements in array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int i;
	int prev = 0;
	int curr = step;

	if (array == NULL)
		return (-1);

	while (curr < (int)size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		prev = curr;
		curr += step;
	}

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	for (i = prev; i <= curr && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
