#include "main.h"

/**
 * is_palindrome - returns 1 if an integer is a palindrome and 0 if not
 *
 * @s: parameter
 *
 * Return: success
 */

int _pal(char *s, int i, int j);
int rec_len(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return(1);
	}
	else
	{
		return (_pal(s, 0, rec_len(s)));
	}
}

/**
 * rec_len - length
 * @s: string
 */

int rec_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + rec_len(s + 1));
	}
}

/**
 * _pal - checker
 * @s: string
 * @i: iterator
 * @length
 */

int _pal(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	else
	{
		return (_pal(s, i  + 1, j - 1));
	}
}
