#include "main.h"

/**
 * _isupper -  checks for an uppercase letter
 *
 * @c:  character to be checked
 *
 * Return: Always return 1 if true and 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
