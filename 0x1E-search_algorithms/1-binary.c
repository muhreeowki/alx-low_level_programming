#include "search_algos.h"
#include <math.h>

/**
 * binary_search: A function that searches for a value in a list of integers.
 *
 * @array: A pointer to an array of integers.
 * @size: The number of elements in the array.
 * @value: The value to look for.
 *
 * Return: The index that holds the value or -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
