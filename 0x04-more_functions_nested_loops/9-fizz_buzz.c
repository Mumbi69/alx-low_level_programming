#include "stdio.h"

/**
* main - start of program.
* Return: returns 0
*/
int main(void)
{
	int l;

	for (l = 1; l < 101; l++)
	{
		if (l % 3 == 0 && l % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (l % 3 == 0 || l % 5 == 0)
		{
			if (l % 3 == 0)
			{
				printf("Fizz");
			}
			if (l % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", l);
		}
		if (l != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
