#include <stdio.h>

/**
* main - starts a program
*
* Return: returns o
*/

int main(void)
{
	int i;
	int s;

	for (i = 0; i < 99; i++)
	{
		for (s = 0; s <= 99; s++)
		{
			if (i < s)
			{
				putchar(i / 10 + '0');

				putchar(i % 10 + '0');
				putchar(' ');
				putchar(s / 10 + '0');
				putchar(s % 10 + '0');

				if (i != 98 || s != 99)
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
