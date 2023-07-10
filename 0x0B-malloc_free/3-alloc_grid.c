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
	int i, *temp;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * (height * width));

	if (array == NULL)
		return (NULL);

	i = 0;

	for (i = 0; i < height; i++)
	{
		temp = calloc(width, sizeof(int));
		*(array + i) = temp;
	}

	return (array);
}
