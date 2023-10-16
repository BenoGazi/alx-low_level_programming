#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: character to be reversed
 *
 * return: void
 *
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int rev = 0;
	int i;

	while (s[rev] != '\0')
	{
		rev++;
	}
	for (i = 0; i < rev; i++)
	{
		rev--;
		reverse = s[i];
		s[i] = s[rev];
		s[rev] = reverse;
	}
}
