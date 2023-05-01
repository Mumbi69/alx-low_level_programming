#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of listint_t
* @h: pointer to the linked list
*
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t c = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		c++;
		ptr = ptr->next;
	}

	return (c);
}

