#include "main.h"

/**
* _sign - prints the sign of a number
* @c: The character to print
*
* Return: returns 1 and prints + if n is reater than zero, 0 and prints 0 if n is zero, -1 and prints - if n is less than zero.
if*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
