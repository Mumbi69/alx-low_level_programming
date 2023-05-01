#include <stddef.h>
#include "lists.h"

/**
* sum_listint - returns sum of all the data (n) of listint_t
* @head: first node
* Return: 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *c;

	c = head;

	while (c != NULL)
	{
		sum += c->n;
		c = c->next;
	}

	return (sum);
}
