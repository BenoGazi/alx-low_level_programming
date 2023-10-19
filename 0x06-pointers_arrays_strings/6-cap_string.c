#include "main.h"

/**
 * cap_string - capitalise all words of a string
 *
 * @cap: parameter
 *
 * Return: return string
 */

char *cap_string(char *cap)
{
	int i = 0;

	while (cap[i])
	{
		while (!(cap[i] >= 'a' && cap[i] <= 'z'))
		{
			i++;
		}

		if (cap[i - 1] == ' ' ||
		cap[i - 1] == '\t' ||
		cap[i - 1] == '\n' ||
		cap[i - 1] == ',' ||
		cap[i - 1] == ';' ||
		cap[i - 1] == '.' ||
		cap[i - 1] == '!' ||
		cap[i - 1] == '?' ||
		cap[i - 1] == '"' ||
		cap[i - 1] == '(' ||
		cap[i - 1] == ')' ||
		cap[i - 1] == '{' ||
		cap[i - 1] == '}' || i == 0)
		{
			cap[i] -= 32;
			i++;
		}
	}
	return (cap);
}
