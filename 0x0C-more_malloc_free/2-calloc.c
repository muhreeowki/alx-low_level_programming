#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and sets it to zero
 *
 * @size: of each array
 * @nmemb: number of arrays
 *
 * Return: a pointer to the concatenated string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int **array;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(void *) * nmemb);

	for (i = 0; i < nmemb; i++)
	{
		*(array + i) = malloc(size);

		if (*(array + i) == NULL)
		{
			for (j = 0; j <= i; j++)
				free((*(array + i) + j));
			free(array);
			return (NULL);
		}

		for (j = 0; j < size; j++)
			array[i + j] = 0;
	}

	return (array);
}
