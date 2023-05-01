#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of listint_t
* @head: first node
* @index: unsigned int
* Return: the nth node / NULL if the node doesn't exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *c;

	c = head;

	for (i = 0; c != NULL && i < index; i++)
		c = c->next;

	return (c);

}
