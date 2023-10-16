#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: none
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
	{
		_putchar(s[rev]);
			rev++;
	}
	while (rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
