#include "main.h"

/**
 * _print_rev_recursion - prints astring in reverse
 *
 * @s: string to reverse
 *
 * Return: always success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
