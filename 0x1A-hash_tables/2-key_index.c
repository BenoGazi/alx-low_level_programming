#include "hash_tables.h"

/**
 * key_index - Retirieve the index of a key/value pair in the array
 * @key: The key of the index
 * @size: The Array Sixe
 * Return: The index at which the key/value pair should be stored
 * int the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) %  size);
}
