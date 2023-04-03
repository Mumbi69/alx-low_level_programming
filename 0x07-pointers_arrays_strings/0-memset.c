#include "main.h"

/**
* _memset - fills the first n bytes of the memory area
* pointed to by s with the constant byte b.
* @s: pointer to the memory block to be filled
* @b: value to be set
* @n: number of bytes to be set to value b
*
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
