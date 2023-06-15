#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: pointer to the head
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return (count);
}
