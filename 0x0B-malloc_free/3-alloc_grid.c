#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: Pointer to a two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **two_dm_arr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	two_dm_arr = (int **)malloc(height * sizeof(int *));
	if (two_dm_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		two_dm_arr[i] = (int *)malloc(width * sizeof(int));
		if (two_dm_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(two_dm_arr[j]);
			}
			free(two_dm_arr);
			return (NULL);
		}
	}
	return (two_dm_arr);
}
