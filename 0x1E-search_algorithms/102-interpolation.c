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
	int pos;
	int low = 0;
	int high = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

		if (pos < (int) size)
		{
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

			if (array[pos] == value)
				return (pos);

			if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			break;
		}
	}

	return (-1);
}
