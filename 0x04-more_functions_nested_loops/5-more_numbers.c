#include "main.h"

/**
* more_numbers -  prints 10 times the numbers, from 0 to 14
*
*
*/

void more_numbers(void)
{
	int s;
	int m;

	for (s = 0; s <= 10; s++)
	{
		for(m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
