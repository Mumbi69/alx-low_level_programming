#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @cw: the character
*
* Return: nothing
*/

char *cap_string(char *cw)
{
	int n = 0;
	int caps = 1;

	while (cw[n] != '\0')
	{
		if (caps && (cw[n] >= 'a' && cw[n] <= 'z'))
		{
			cw[n] -= 32;
		}
		caps = 0;

		if (cw[n] == ' ' ||
			cw[n] == '\t' ||
			cw[n] == '\n' ||
			cw[n] == ',' ||
			cw[n] == ';' ||
			cw[n] == '.' ||
			cw[n] == '!' ||
			cw[n] == '?' ||
			cw[n] == '"' ||
			cw[n] == '(' ||
			cw[n] == ')' ||
			cw[n] == '{' ||
			cw[n] == '}')
		{
			caps = 1;
		}
		n++;
	}
	return (cw);
}

