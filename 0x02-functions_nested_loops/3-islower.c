#include "main.h"

/**
 * _islower - chaecks for lowercase letters
 *@c: character to check
 * Return: 1 for lowercase and 0 otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
