#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: first parameter
 * @av: second parameter
 * Return: String
 */

char *argstostr(int ac, char **av)
{
	int i, k, l;
	int j = 0;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			k++;
			j++;
		}
	}
	concat = (char *)malloc(sizeof(char) * (k + ac + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			concat[l] = av[i][j];
			l++;
			j++;
		}
		concat[l] = '\n';
		l++;
	}
	concat[l] = '\0';
	return (concat);
}
