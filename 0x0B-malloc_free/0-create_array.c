#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 *
 * @size: size of array
 * @c: character to initiate
 *
 * Return: array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
