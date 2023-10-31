#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new allocated space in memory
 *
 * @str: string
 *
 * Return: string
 */

char *_strdup(char *str)
{
	char *arr;
	int count = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	arr =  malloc((sizeof(char) * len) + 1);
	if (str && arr == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		arr[count] = str[count];
		count++;
	}
	return (arr);
}
