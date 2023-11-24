#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: binary
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	i = 0;
	j = 0;
	while (b[i] != '\0')
	{
		j <<= 1;
		if (b[i] == '1')
		{
			j += 1;
		}
		i++;
	}
	return (j);
}
