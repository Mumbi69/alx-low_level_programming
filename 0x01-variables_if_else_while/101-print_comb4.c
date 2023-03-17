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
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (s = 0; s <= 9; s++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (i < s && s < m)
				{
					putchar(i + '0');

					putchar(s + '0');
					putchar(m + '0');
					if (i != 7 || s != 8 || m != 9)
					{
						putchar(',');

						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
