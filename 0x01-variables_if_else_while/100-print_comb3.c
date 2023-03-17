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

	for (i = 0; i < 9; i++)
	{
		for (s = 1; s <= 9; s++)
		{
			if (i < s)
			{
				putchar(i + '0');

				putchar(s + '0');
				if (i != 8 || s != 9)
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
