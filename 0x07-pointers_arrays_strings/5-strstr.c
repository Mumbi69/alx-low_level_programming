#include "main.h"
#include <stddef.h>

/**
* _strstr - finds the first occurrence of the substring
* needle in the string haystack.
* @haystack: string
* @needle: substring
*
* Return: a pointer to the beginning of the located substring
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystick;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
