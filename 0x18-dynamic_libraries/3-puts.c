#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: prints a string
 *
 * return: void
 *
 */

void _puts(char *str)
{
	int prt_str = 0;

	while (str[prt_str])
	{
		_putchar(str[prt_str]);
		prt_str++;
	}
	_putchar('\n');
}
