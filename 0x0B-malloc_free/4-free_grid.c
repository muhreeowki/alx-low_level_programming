#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: pointer to 2d array
 * @height: number of arrays in grid
 *
 * Return: Pointer to string, or NULL if it fails.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
