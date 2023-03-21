#include <stdio.h>

/**
  * main - starts a program
  * less than 4000000.
  *
  * Return: returns ...
  */

int main(void)
{
	int s = 0;
	long m = 1, a = 2, sum = a;

	while (a + m < 4000000)
	{
		a += m;

		if (a % 2 == 0)
			sum += a;

		m = a - m;

		++s;
	}

	printf("%ld\n", sum);
	return (0);
}
