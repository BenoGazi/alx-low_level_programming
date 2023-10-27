#include "main.h"

/**
 * is_prime_number - returns 1 if an integer is a prime number
 * othrwise return 0
 *
 * @n: parameter to check
 *
 * Return: Success
 */
int _prime(int n, int prm);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (1);
	}
	else if (n > 2)
	{
		return (0);
	}
	else
	{
		return (_prime(n, n - 1));
	}
}

/**
 * _prime - return prime integer
 *
 * @prm: searches for a prime integer
 * @n: parameter
 * Return: success
 */

int _prime(int n, int prm)
{
	if (n % prm == 0 && prm > 1)
	{
		return (1);
	}
	else if (n % prm != 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, prm - 1));
	}
}
