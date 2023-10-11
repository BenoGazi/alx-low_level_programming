#include "main.h"

/**
 *print_sign - prints number sign
 *Return: returns 1 for positive numbers, -1 for negetives ones/
 *and 0 for anything else
 *@n: character to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
