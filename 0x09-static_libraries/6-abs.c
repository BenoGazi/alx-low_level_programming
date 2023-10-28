#include "main.h"

/**
 *_abs - returns the absolute value of an integer
 *
 *Return: absolute value of number or zero
 *@c: character to be computed
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absolute;

		absolute = c * -1;
		return (absolute);
	}
	return (c);
}
