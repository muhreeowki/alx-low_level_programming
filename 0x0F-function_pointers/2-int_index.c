#include "function_pointers.h"

/**
 * int_index - that searches for an integer
 *
 * @array: pointer to array to search in
 * @size: number of elements in the array
 * @cmp: pointer to a function that is used
 * to compare values
 *
 * Return: index to the integer.
 * return -1 if int is not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
