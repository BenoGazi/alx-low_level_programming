#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash Table
 * @ht - Table to add or update key/value pair to
 * @key - Key but cannot be an ampty string
 * @value - value associated with key. Must be duplicated
 * and can be an empty string
 * Return: 1 on success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cpy;
	hash_node_t *new;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *) key, ht->size);
	i = idx;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			cpy = strdup(value);
			if (!cpy)
			{
				return (0);
			}
			ht->array[i]->value = cpy;
			return (1);
		}
		i++;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	cpy = strdup(value);
	if (!cpy)
	{
		free (new->key);
		free(new);
		return (0);
	}
	new->value = cpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
