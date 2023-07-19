#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size == 0 || action == NULL)
		return;

	for (i = 0; (size_t)i < size; i++)
		(*action)(array[i]);
}
