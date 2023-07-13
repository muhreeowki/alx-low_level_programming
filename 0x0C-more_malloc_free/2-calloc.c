#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 *
 * @size: of each array
 * @nmemb: number of arrays
 *
 * Return: a pointer to the concatenated string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
