#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first parameter
 * @max: second parameter
 * Return: array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *int_arr;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	int_arr = malloc(sizeof(int) * j);
	if (int_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		int_arr[i] = min  + i;
	}
	return (int_arr);
}
