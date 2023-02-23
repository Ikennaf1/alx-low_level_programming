#!/usr/bin/python3

"""
Documented Module
"""


def island_perimeter(grid):
    """
    calculates the perimeter of island in give area
    """
    if grid == None or len(grid) == 0:
        return 0

    grid_length = 0
    grid_width = 0
    grid_perimeter = 0
    island = 0
    island_perimeter = 0

    grid_length = len(grid[0])
    grid_width = len(grid)
    grid_perimeter = (grid_length + grid_width) * 2
    for g in grid:
        for i in g:
            if i == 1:
                island += 1
    island_perimeter = grid_perimeter - (island * 2)
    return island_perimeter
