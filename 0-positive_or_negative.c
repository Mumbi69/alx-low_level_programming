#include <stdlib.h>
#include <time.h>

/**
* main - initializes n
*
* Return: returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("d\n", is positive);
	else if (n < 0)
		printf("d\n", is negative);
	else if (n == 0)
		printf("d\n", is zero);
	return (0);
}
