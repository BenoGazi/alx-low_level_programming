#include "main.h"

/**
 * puts_half - prints last half of the string
 *
 * @str: string parameter
 *
 * return: void
 *
 */

void puts_half(char *str)
{
	int fstring, half;

	fstring = 0;

	while (str[fstring != '\0'])
	{
		fstring++;
	}
	half = fstring / 2;
	if (fstring % 2 == 1)
	{
		half++;
	}
	while (half < fstring)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
