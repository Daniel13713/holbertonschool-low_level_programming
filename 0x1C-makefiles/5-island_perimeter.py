#!/usr/bin/python3
"""
Perimeter of the island
"""


def island_perimeter(grid):
    """Calculate the perimeter"""
    land = 0
    rows = len(grid)
    columns = len(grid[0])
    for i in range(rows):
        j = 0
        for j in range(columns):
            if grid[i][j] == 1:
                if j == columns-1 or grid[i][j+1] == 0:
                    """right"""
                    land += 1
                if j == 0 or grid[i][j-1] == 0:
                    """left"""
                    land += 1
                if i == 0 or grid[i-1][j] == 0:
                    """up"""
                    land += 1
                if i == rows-1 or grid[i+1][j] == 0:
                    """down"""
                    land += 1
    return land
