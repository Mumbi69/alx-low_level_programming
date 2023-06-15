#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees a dlistint_t list.
* @head: first node
*
* Return: Always EXIT_SUCCESS.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
