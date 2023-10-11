#include "search_algos.h"

/**
* interpolation_search - search a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* size is the number of elements in array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	int p;
	int low = 0;
	int high = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		p = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (p < 0 || p >= (int)size)
		{
			printf("Value checked array[%d] is out of range\n", p);
			break;
		}

		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);

		if (array[p] < value)
			low = p + 1;
		else
			high = p - 1;
	}

	return (-1);
}
