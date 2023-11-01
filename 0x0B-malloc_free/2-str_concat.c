#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *addstring;
	int i = 0, j = 0;
	int strlen_1 = 0, strlen_2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[strlen_1] != '\0')
	{
		strlen_1++;
	}
	while (s2[strlen_2] != '\0')
	{
		strlen_2++;
	}
	addstring = (char *)malloc(sizeof(char) * (strlen_2 + strlen_1 + 1));
	if (addstring == NULL)
	{
		return (NULL);
	}
	while (i < strlen_1)
	{
		addstring[i] = s1[i];
		i++;
	}
	while (j < strlen_2)
	{
		addstring[i + j] = s2[j];
		j++;
	}
	addstring[i + j] = '\0';
	return (addstring);
}
