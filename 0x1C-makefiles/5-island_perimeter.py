#!/usr/bin/env python3

"""Created by:
    Samuel Ezeh
    On 9/11/22
"""
def island_perimeter(grid):
    """A function that returns the perimeter of the island described in grid

    Args:
        grid (int): A list of list of integers
        - 0 represents a water zone
        - 1 represents a land zone

    Returns:
        The perimeter of the island
    """
    perimeter = 0
    row = len(grid)
    column = len(grid[0])

    if grid is not None and row > 0 and column > 0:
        for x in range(0, row):
            for y in range(0, column):
                if grid[x][y] >= 1:
                    perimeter += 4
                    if y != 0 and grid[x][y - 1] >= 1:
                        perimeter -= 2
                    if x != 0 and grid[x - 1][y] >= 1:
                        perimeter -= 2
    return perimeter
