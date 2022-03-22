#!/usr/bin/python3
"""
Perimeter of the island
"""


def island_perimeter(grid):
    """Calculate the perimeter"""
    land = 0
    rows = len(grid)
    columns = len(grid[0])
    if rows < 3 or columns < 3:
        return 0
    for i in range(rows):
        j = 0
        for j in range(columns):
            if grid[i][j] == 0:
                if j != columns-1 and grid[i][j+1] == 1:
                    """right"""
                    land += 1
                if j != 0 and grid[i][j-1] == 1:
                    """left"""
                    land += 1
                if i != 0 and grid[i-1][j] == 1:
                    """up"""
                    land += 1
                if i != rows-1 and grid[i+1][j] == 1:
                    """down"""
                    land += 1
    return land
