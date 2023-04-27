#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	int value = 0;
	list_t *new_node, *last_node;

	while (str[value] != '\0')
		value++;



	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->len = value;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
		return (new_node);
	}
}
