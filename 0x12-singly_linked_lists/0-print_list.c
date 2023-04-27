#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all elements of a list_t list
* @h: ...
*
* Return: 0
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

