#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
* @head: first node
* @n: member of the new node
*
* Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{

		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
