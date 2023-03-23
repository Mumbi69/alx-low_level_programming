#include "main.h"
/**
 *print_line - draws a straight line in the terminal n times.
 *@n: parameter
 *Return: returns nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
