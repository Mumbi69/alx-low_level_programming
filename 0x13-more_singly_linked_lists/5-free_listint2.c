#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: first node
*
* Return: 0
*/

void free_listint2(listint_t **head)
{
	listint_t *c;

	while (*head != NULL)
	{
		c = *head;

		*head = (*head)->next;
		free(c);
	}
	*head = NULL;
}
