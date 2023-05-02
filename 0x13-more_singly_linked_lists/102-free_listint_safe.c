#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely
* @h: pointer to pointer to head of linked list
*
* Return: Size of the list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}

	*h = NULL;

	return (count);
}
