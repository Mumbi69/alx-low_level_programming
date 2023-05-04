#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts a binary number to unsigned int
* @b: binary number
*
* Return: the converted number to an unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, bit = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | bit;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

