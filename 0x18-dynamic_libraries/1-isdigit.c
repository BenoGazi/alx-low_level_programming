#include "main.h"

/**
 *_isdigit - checks if a character is a digit from 0 through 9
 *
 *@c: parameter to check
 *
 *Return: returns 1 if true and 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
