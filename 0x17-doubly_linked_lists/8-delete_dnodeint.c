#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes the node at index
* @head: first node
* @index: ...
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *temp_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
	}

	temp_node = current_node->next;
	if (temp_node == NULL)
		return (-1);

	current_node->next = temp_node->next;
	if (temp_node->next != NULL)
	temp_node->next->prev = current_node;

	free(temp_node);

	return (1);
}
