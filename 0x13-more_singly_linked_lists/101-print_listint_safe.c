#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list, handling loops
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *array[1024];
	size_t j, i = 0, count = 0;

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (i == 1024)
		{
			current = current->next;
			continue;
		}

		array[i] = current;

		for (j = 0; j < i; j++)
		{
			if (array[j] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(count);
			}
		}

		i++;
		current = current->next;
	}

	return (count);
}
