#include "hash_tables.h"

/**
 * hash_table_create - Create New Hash Table
 * @size: Array size
 * Return: A pointer to the newly created hash Table or return NULL
 * if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;
	
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
