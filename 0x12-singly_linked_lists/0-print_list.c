#include <stdio.h>
#include "lists.h"

/**
* list_struct - struct description
*
* @h: ...
* Description: ...
*/

struct list
{
	int h;
};

/**
* print_list - prints all elements of a list_t list
* @h: ...
* @list_t: ...
*
* Return: 0
*/

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		printf("%d", h -> data);
		h = h -> next;
	}
}

