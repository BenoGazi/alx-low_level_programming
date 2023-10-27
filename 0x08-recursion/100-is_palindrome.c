#include "main.h"

/**
 * is_palindrome - returns 1 if an integer is a palindrome and 0 if not
 *
 * @s: parameter
 *
 * Return: success
 */

int _pal(char *s, int drome);

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return(1)
	}
	else
	{
		return (_pal(char *s, drome - 1));
	}
}


int _pal(char *in, int drome)
{
	if (*s == '\0')
	{
		return (0);

		if (*s == drome)
		{
			return (1);
		}
		else
		{
			return (_pal(char *s + 1))
		}
	}

}
