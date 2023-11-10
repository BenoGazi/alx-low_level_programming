#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"
#include "stdlib.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: firs parameter
 * @n: second parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	i = 0;
	while (i < n)
	{
		printf("%i", va_arg(num, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(num);
}
