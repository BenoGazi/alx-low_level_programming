#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: concatenator
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *concat;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		j++;
	}
	concat = malloc(i + j + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (k < i)
	{
		k++;
		concat[k] = s1[k];
	}
	while (k < i + j)
	{
		concat[k] = s2[k - i];
		k++;
	}
	concat[i + j] = '\0';
	return (concat);
}
