#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up 2 dimensional array
 * @grid: grid
 * @height: param 2
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
