#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: input parameter
 *
 * Return: return lenght of  string
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
	{
		str_len++;
	}
	return (str_len);
}
