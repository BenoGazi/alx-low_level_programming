#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring to search
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[i + m] != needle[m])
			{
				break;
			}
		}
		if (needle[m] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
