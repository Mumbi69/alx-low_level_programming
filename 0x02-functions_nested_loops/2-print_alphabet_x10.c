#include "main.h"

/**
* print_alphabet_x10 - prints 10 x the alphabet
*
*/

void print_alphabet_x10(void)
{
	char m;
	char c;

	for (c = 1; c <= 10; ++c)
	{
		for (m = 'a'; m <= 'z'; ++m)
		{
			_putchar(m);
		}


			_putchar('\n');
	}
}
