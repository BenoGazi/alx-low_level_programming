#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @upper: parameter
 *
 * Return: string of uppercase words
 */

char *string_toupper(char *upper)
{
	int i = 0;

	while (upper[i] != '\0')
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
			upper[i] = upper[i] - 32;
		}
		i++;
	}
	return (upper);
}
