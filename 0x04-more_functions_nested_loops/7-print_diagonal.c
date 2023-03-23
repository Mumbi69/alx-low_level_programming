#include "main.h"

#include "main.h"
/**
 *print_diagonal - draws a diagonal line in the terminal n times.
 *@n: number of times '\' is printed
 *
 */
void print_diagonal(int n)
{
	int s, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < n; s++)
		{
			for (m = 0; m < s; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
