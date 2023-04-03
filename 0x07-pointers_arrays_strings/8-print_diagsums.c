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
	int s, m, sum = 0, sum1 = 0;

	for (s = 0; s <= (size * size); s = s + size + 1)
	{
		sum = sum + a[s];
	}
	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
	{
		sum1 = sum1 + a[m];
		printf("%d, %d\n", sum, sum1);
	}
}
