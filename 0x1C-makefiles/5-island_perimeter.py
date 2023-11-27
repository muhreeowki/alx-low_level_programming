#!/usr/bin/python3
"""Island Perimeter technical interview question"""


def island_perimeter(grid):
    """Solution"""
    perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                count = 0
                count += 1 if y - 1 < 0 else grid[y - 1][x]
                count += 1 if y + 1 >= len(grid) else grid[y + 1][x]
                count += 1 if x - 1 < 0 else grid[y][x - 1]
                count += 1 if x + 1 >= len(grid[y]) else grid[y][x + 1]
                perimeter += 4 - count
    return perimeter
