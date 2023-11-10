#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	char *str;
	int arg;
	char *separator = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		arg = 0;
		while (format[arg])
		{
			switch (format[arg])
			{
				case 's':
					str = va_arg(list, char *);
					if (!str)
					{
						str = "";
					}
						printf("%s%s", separator, str);
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				default:
					arg++;
					continue;
			}
			separator = ", ";
			arg++;
		}
	}
	va_end(list);
	printf("\n");
}
