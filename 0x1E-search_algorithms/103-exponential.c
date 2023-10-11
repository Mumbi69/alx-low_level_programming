#include "search_algos.h"

/**
* exponential_search - Search for a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* size is the number of elements in array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
*/

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;
	int left = bound / 2;
	int right = (bound < (int)size - 1) ? bound : (int)size - 1;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < (int)size && array[bound] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	return (-1);
}

/**
* binary_search_exponential - Perform a binary search within the given range.
*
* @array: The array to search in.
* @left: The left boundary of the range.
* @right: The right boundary of the range.
* @value: The value to search for.
*
* Return: The index where 'value' is located, or -1 if not found.
*/

int binary_search_exponential(int *array, int left, int right, int value)
{
	while (left <= right)
	{
		int i;
		int mid = left + (right - left) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= mid; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
