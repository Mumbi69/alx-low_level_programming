#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes head node of listint_t
* @head: first node
* Return: head node's data (n) / 0 if linked list is empty
*/

int pop_listint(listint_t **head)
{
	int m;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;
	m = temp->n;
	free(temp);

	return (m);
}
