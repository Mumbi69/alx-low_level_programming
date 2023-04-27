#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: pointer to head
* @str: string
*
* Return: new element
*/

list_t *add_node(list_t **head, const char *str)
{
	int value = 0;
	list_t *new_node;

	while (str[value] != '\0')
		value++;



	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->len = value;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
