#include "main.h"

/**
* _islower - checks for lowercase character
* @c: The character to print
*
* Return: on success return 1, on error return 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
