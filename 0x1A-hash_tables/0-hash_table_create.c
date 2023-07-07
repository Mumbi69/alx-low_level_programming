#include "hash_tables.h"

/**
* hash_table_create -  creates a hash table.
* @size: the size of the array
*
* Return: EXIT_SUCCESS, NULL if something goes wrong
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m;
	hash_table_t *ht;

	if (size == 0)
	{
		return (NULL);
	}

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (m = 0; m < size; m++)
		ht->array[m] = NULL;

	return (ht);
}
