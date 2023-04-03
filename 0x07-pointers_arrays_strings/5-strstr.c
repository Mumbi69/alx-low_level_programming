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
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *h != '\0')
		{
			h++;
			n++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (NULL);
}
