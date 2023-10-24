#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer parameter
 * @b: value parameter
 * @n: byte parameter
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
