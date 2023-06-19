#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to be searched
* @accept: pointer to the string of characters to search for
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = accept;

		while (*p && *p != *s)
		{
			p++;
		}
		if (*p == '\0')
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
