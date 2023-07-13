#include "main.h"
#include <stdlib.h>

/**
 * _calloc - concatenates n chars from s2 to s1
 *
 * @s1: String 1
 * @s2: String 2
 * @n: number of chars to concatenate
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
				free((array + j));
			free(array);
			return (NULL);
		}

		for (j = 0; j < size; j++)
		{
			array[i + j] = 0;
		}
	}

	return (array);
}
