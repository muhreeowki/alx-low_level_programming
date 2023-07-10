#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - creates a duplicate of a string.
 *
 * @str: pointer to string to duplicate
 *
 * Return: Pointer to string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	int i, n;
	char *dupstr;

	n = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + n) != '\0')
		n++;

	dupstr = (char *) malloc(sizeof(char) * n);

	if (dupstr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dupstr[i] = str[i];

	return (dupstr);
}
