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
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}

