#include "main.h"


unsigned long int pr_binary(unsigned int b, unsigned int p);
/**
 * print_binary - prints the binary representation a number
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int div;
	char f = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	div = pr_binary(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		if (n & div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

/**
 * pr_binary - calculates b raised to p
 * @b: base
 * @p: power
 * Return: Success
 */

unsigned long int pr_binary(unsigned int b, unsigned int p)
{
	unsigned long int i;

	i = 1;
	while (p > 0)
	{
		i *= b;
		p--;
	}
	return (i);
}
