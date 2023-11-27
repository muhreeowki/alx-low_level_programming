#!/usr/bin/python3
"""Island Perimeter technical interview question"""


def island_perimeter(grid):
    """Solution"""
    perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                try:
                    count = (
                        grid[y - 1][x]
                        + grid[y + 1][x]
                        + grid[y][x - 1]
                        + grid[y][x + 1]
                    )
                    perimeter += 4 - count
                except IndexError:
                    return 0
    return perimeter
