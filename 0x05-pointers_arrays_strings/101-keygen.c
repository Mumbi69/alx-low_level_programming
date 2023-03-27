#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	char password[PASSWORD_LENGTH];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int r = rand() % 62;

		if (r < 26)
		{
			password[i] = 'A' + r;
		}
		else if (r < 52)
		{
			password[i] = 'a' + r - 26;
		}
		else
		{
			password[i] = '0' + r - 52;
	}
}
