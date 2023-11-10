#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - sums all integer parameters
 * @n: compulsory parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list total;

	if (n == 0)
	{
		return (0);
	}
	va_start(total, n);
	i = 0;
	while (i < n)
	{
		result += va_arg(total, int);
		i++;
	}
	va_end(total);
	return (result);
}
