#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory block
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: a pointer to the concatenated string
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;
	char *old_array;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr = malloc(new_size + old_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size <= 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	array = malloc(new_size);
	old_array = ptr;

	for (i = 0; i <= old_size; i++)
		*(array + i) = *(old_array + i);

	free(ptr);
	return (array);
}
