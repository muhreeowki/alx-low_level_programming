#!/usr/bin/python3
"""Island Perimeter technical interview question"""


def island_perimeter(grid):
    """Solution"""
    perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                count = 0
                count += grid[y][x + 1] if x + 1 < len(grid[y]) else 1
                count += grid[y][x - 1] if x - 1 > 0 else 1
                count += grid[y + 1][x] if y + 1 < len(grid) else 1
                count += grid[y - 1][x] if y - 1 > 0 else 1
                perimeter += 4 - count
    return perimeter
