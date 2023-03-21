#include <stdio.h>

/**
  * main - start of a program
  *
  * Return: returns ...
  */

int main(void)
{
	int s = 0;
	long m = 1, a = 2;

	while (s < 50)
	{
		if (s == 0)
			printf("%ld", m);
		else if (s == 1)
			printf(", %ld", a);
		else
		{
			a += m;
			m = a - m;
			printf(", %ld", a);
		}

		++s;
	}

	printf("\n");
	return (0);
}
