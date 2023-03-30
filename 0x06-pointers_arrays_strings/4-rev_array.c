#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array 1
* @n: number of elements of array
*
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i;
	int swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}
