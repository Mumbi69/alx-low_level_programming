#include <stdio.h>

/**
* main - start of the program
*
* Return: returns 0
*/

int main(void)
{
	char c;
/* print lowercase alphabet */

	for (c = 'a'; c <= 'z'; ++c)
	{
	putchar(c);
}

/* print uppercase alphabet */
	for (c = 'A'; c <= 'Z'; ++c)
	{
	putchar(c);
}

	putchar('\n');

	return (0);
}
