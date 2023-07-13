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
	int *array, num, len, i;

	len = max - min;
	num = min;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		array[i] = num;
		num++;
	}

	return (array);
}
