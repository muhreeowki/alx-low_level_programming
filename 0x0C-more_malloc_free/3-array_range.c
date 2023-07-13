#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: first number of the array
 * @max: last number of the array
 *
 * Return: a pointer to the concatenated string
 */

int *array_range(int min, int max)
{
	int *array, len, i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
