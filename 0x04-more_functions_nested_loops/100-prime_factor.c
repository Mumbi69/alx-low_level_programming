#include <stdio.h>

/**
*main - start of the program
*
*Return: returns 0
*/

int main(void)
{
	long int d, pf;

	d = 2;
	pf = 612852475143;

	while (d != pf)
	{
		if (pf % d == 0)
		{
			pf = pf / d;
		}
		else
		{
			d++;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
