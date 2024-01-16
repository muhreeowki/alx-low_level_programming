#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in a list of integers.
 *
 * @array: A pointer to an array of integers.
 * @size: The number of elements in the array.
 * @value: The value to look for.
 *
 * Return: The index that holds the value or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
