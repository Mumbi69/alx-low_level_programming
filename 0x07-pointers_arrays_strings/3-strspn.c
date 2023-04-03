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
	int found;
	found = 0;

	while (*s != '\0')
	{
		for (char *a = accept; *a !='\0'; a++)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
			}
		}
		if (found == 0)
		{
			return (count);
		}
		s++;
	}
	return (count);
}
