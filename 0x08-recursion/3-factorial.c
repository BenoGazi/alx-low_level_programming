#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: factorial
 *
 * Return: returns the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
