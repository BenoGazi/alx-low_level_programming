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
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else if (needle[j] != '\0')
			{
				return (&haystack[i]);
			}
			else
			{
				return ('\0');
			}
		}
	}
	return (0);
}
