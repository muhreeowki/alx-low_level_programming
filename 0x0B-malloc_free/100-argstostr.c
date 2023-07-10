#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all arguments
 *
 * @ac: number of arguments
 * @av: array of string arguments
 *
 * Return: Pointer to string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, n, total_chars;
	char *new;

	if (ac <= 0 || av == NULL)
		return (NULL);

	total_chars = 0;
	n = 0;

	/* Find total number of chars */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_chars++;
	}

	/* Allocate memory */
	new = (char *) malloc(sizeof(char) * total_chars);

	if (new == NULL)
		return (NULL);

	/* Concatenate strings */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(new + n) = av[i][j];
			n++;
		}
		new[n] = '\n';
		n++;
	}

	new[n] = '\0';

	return (new);
}
