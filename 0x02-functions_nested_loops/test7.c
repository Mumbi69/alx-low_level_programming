#include <stdio.h>

int main(void)
{
	int i;

	i = -9;
	while (i < 0)
	{
    		printf("%d", -i);
    		i++;
	}
}


/*i = --9
-9 is less than 0
return value first = -9
*/
