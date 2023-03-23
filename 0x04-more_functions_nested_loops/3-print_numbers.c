#include "main.h"

/**
* print_numbers - prints the numbers from 0 to 9
*
* Return: returns 0
*/

void print_numbers(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');

}
