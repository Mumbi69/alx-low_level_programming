#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory of an array
* @nmemb: ...
* @size: ...
*
* Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}
