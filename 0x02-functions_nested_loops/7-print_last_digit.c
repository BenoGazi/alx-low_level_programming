#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be computed
 * Return: value of lst
 *
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
	{
		lst *= -1;
	}
	_putchar(lst + '0');
	return (lst);
}
