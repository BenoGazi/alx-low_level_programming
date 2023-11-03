#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks for an assigned memory space
 * @b: prameter to check
 * Return: Success!
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
