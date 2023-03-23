#include <stdio.h>

int main(void)
{
	int i;
	i = 9;

	/*while (--i)
	{
		printf("%d", i);
	}
		printf("\n");*/

	/*while (i > 0)
	{
		--i;
		printf("%d", i);
	}
		printf("\n");*/

	/*while (i > 0)
	{
		printf("%d", i);
		--i;
	}
		printf("\n");*/

	while (i--)
	{
		printf("%d", i);
	}
		printf("\n");
}
