#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table.
* @ht: new hash table
* @key: the key value which cannot be an empty string
* @value: the value associated with the key.
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, m;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (m = index; ht->array[m]; m++)
	{
		if (strcmp(ht->array[m]->key, key) == 0)
		{
			free(ht->array[m]->value);
			ht->array[m]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
