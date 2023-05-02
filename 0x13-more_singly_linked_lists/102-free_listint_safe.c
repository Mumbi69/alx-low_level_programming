#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely
* @h: pointer to pointer to head of linked list
*
* Return: Size of the list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    size_t count = 0;

    if (h == NULL)
        return (count);

    current = *h;
    while (current != NULL)
    {
        next = current->next;

        if (next != NULL && next <= current)
        {
            current->next = NULL;
            next = NULL;
        }

        free(current);
        count++;

        current = next;
    }

    *h = NULL;

    return (count);
}
