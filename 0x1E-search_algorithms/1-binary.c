#include "search_algos.h"

/**
* binary_search - a sorted array of integers using the Binary search algorithm
* @array: a pointer to the first element of the array to search in
* size is the number of elements in array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
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
