#include <stdio.h>
#include "main.h"
/**
* print_diagsums - prints the sum of the two diagnols of a
* square matrix of integers
* @a: parameter
* @size: size of array
*
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum1 += *(a + i * size + j);
	}

	printf("%d\n", sum);
	printf("%d\n", sum1);
}
