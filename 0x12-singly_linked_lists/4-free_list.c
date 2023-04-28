#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list
* @head: ...
*
* Return: 0
*/

void free_list(list_t *head)
{
	list_t *next_node, *current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
