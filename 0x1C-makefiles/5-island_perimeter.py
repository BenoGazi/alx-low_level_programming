#!/usr/bin/python3
"""Defines an Island Perimeter measurung function"""

def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
        Perimeter is denoted by perim
    """
    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perim += 4  
                if j > 0 and grid[i][j - 1] == 1:
                    perim -= 2  
                if i > 0 and grid[i - 1][j] == 1:
                    perim -= 2  

    return perim
