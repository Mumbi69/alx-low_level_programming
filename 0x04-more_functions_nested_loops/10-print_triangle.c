#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: size of a triangle
*
*/

void print_triangle(int size)
{
	int s, m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (m = size - n; m > 0; m--)
			{
				_putchar(' ');
			}
			for (s = 0; s < n; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
