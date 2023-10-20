#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word in a string.
 *
 * @cap: The input string.
 *
 * Return: The modified string.
 */

char *cap_string(char *cap)
{
	int i = 0;

	if (cap[0] >= 'a' && cap[0] <= 'z')
	{
		cap[0] -= 32;
	}
	while (cap[i] != '\0')
	{
	if (cap[i] == ' ' || cap[i] == '\t' || cap[i] == '\n' ||
		cap[i] == ',' || cap[i] == ';' ||
		cap[i] == '.' || cap[i] == '!' || cap[i] == '?' ||
		cap[i] == '"' || cap[i] == '(' ||
		cap[i] == ')' || cap[i] == '{' || cap[i] == '}')
	{
		i++;
	if (cap[i] >= 'a' && cap[i] <= 'z')
	    {
		    cap[i] -= 32;
	    }
	}
	else
	{
		i++;
	}
	}
	return cap;
}

