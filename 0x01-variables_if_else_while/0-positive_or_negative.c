#include <stdlib.h>
#include <time.h>

/**
* main - initializes the number n
*
* Return: returns 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0, n == 0, n < 0);
		printf("is positive, is zero, is negative");
	return (0);
}
