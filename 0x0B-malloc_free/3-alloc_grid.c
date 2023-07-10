#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: size of array 2
 * @height: size of array 1
 *
 * Return: Pointer to string, or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc((sizeof(int *) * height));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(array + i) = (int *) malloc(sizeof(int) * width);
		if (*(array + i) == NULL)
		{
			for (j = 0; j <= i; j++)
				free(*(array + j));
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
