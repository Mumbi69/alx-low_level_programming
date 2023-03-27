#include "main.h"

/**
* rev_string - reverses a string.
* @s:the string to be reversed
*
* Return: always return 0
*/

void rev_string(char *s)
{
	int len = 0;
	char *start, *end, rever;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	start = s - len;
	end = s - 1;

	while (end > start)
	{
		rever = *start;
		*start = *end;
		*end = rever;
		start++;
		end--;
	}
}


