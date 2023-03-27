#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
* main - starts the program
*
* Return: always retun 0
*/

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{

	int r = rand() % 93;

	if (r < 33)
	{
		password[i] = '!' + r;
	}
	else if (r < 59)
	{
		password[i] = 'A' + r - 33;
	}
	else if (r < 85)
	{
		password[i] = 'a' + r - 59;
	}
	else
	{
		password[i] = '0' + r - 85;
	}
}

	password[PASSWORD_LENGTH] = '\0';

	printf("Random password: %s\n", password);

	return (0);
}
