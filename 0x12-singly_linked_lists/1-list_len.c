#include <stdio.h>
#include "lists.h"

/**
* list_len - returns the number of elements in list_t
* @h: ...
*
* Return: 0
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
