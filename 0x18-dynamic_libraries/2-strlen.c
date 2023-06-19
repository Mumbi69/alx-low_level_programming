#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: string to be returned
*
* Return: always return 0
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
