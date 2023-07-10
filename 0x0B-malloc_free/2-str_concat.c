#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: Pointer to string, or NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *new_string;

	/* Find the size of s1 and s2 */

	i = 0;
	j = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j;

	new_string = (char *) malloc(sizeof(char) * size);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new_string[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		new_string[i + j] = s2[j];

	new_string[i + j] = '\0';

	return (new_string);
}
