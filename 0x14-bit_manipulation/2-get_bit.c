#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in bits
 * @index: index
 * Return: Success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div;
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	div = 1 << index;
	i = n & div;
	if (i == div)
	{
		return (1);
	}
	return (0);
}
