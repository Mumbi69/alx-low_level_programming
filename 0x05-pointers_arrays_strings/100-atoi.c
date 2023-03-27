#include "main.h"

/**
* _atoi -  convert a string to an integer.
* @s: character
*
* Return: returns 0
*/

int _atoi(char *s)
{
	int sign = 1; /* Initialize sign to positive */
	int num = 0; /* Initialize the number to 0 */
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			if (started)
			{
				break;
			}
			sign = -1;
		}
		else if (*s == '+')
		{
			if (started)
			{
				break;
			}
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = num * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++; /* Move to the next character */
	}

	return (num * sign);
}
