#include "main.h"

/**
* _swap - swaps the values of two integers
* @a: One of the integers to swap
* @b: second integer to swap
*
* Return: returns 0
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
