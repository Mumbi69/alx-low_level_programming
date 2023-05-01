#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: first node
* Return: nothing
*/

void free_listint(listint_t *head)
{
	while (head == NULL)
		return;

	free_listint (head->next);
	free(head);
}
