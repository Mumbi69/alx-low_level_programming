#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: string
* @c: parameter
*
* Return: pointer to the first occurence of the character c
* NULL: if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
