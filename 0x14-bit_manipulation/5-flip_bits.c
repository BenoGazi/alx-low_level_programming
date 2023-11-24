#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to get from one bit to another
 * @n: first param
 * @m: second param
 * Return: Success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int x;

	i = 0;
	x = n ^ m;
	while (x > 0)
	{
		i += x & 1;
		x >>= 1;
	}
	return (i);
}
