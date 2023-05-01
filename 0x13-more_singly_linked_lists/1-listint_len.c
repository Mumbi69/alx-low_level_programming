#include <stddef.h>
#include "lists.h"

/**
* listint_len - returns number of elements in listint_t
* @h: pointer
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t c = 0;

	while (ptr != NULL)
	{
		c++;
		ptr = ptr->next;
	}
	return (c);
}
