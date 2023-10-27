#include "main.h"

/**
 *_sqrt_recursion - main function to return squared root
 *
 *@n: parameter
 *Return: natural square root
 */
int _natural(int n, int sqrt);

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (_natural(n, 0));
	}
}


/**
 * _natural - finds the natural sqaure root of an integer
 *
 * @n: value to calculate
 *
 * @sqrt: value tp loops through
 *
 * Return: alwys success
 */

int _natural(int n, int sqrt)
{
	if (sqrt * sqrt > n)
	{
		return (-1);
	}
	else if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else
	{
		return (_natural(n, sqrt + 1));
	}
	return (0);
}
