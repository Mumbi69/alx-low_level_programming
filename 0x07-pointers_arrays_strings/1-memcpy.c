#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory
* area dest
* @dest: pointer to the destination
* @src: pointer to the source memory
* @n: number of bytes
*
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ptr);

}
