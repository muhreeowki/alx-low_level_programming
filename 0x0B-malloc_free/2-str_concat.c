#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - finds the length of a given string
 *
 * @str: pointer to string
 *
 * Return: Length of string, NULL if pointer is NULL
 */
int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}



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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1 == s2 && s1 == NULL)
	{
		new_string = "";
		return (new_string);
	}

	/* Find the size of s1 and s2 */
	i = _strlen(s1);
	j = _strlen(s2);

	size = i + j + 1;

	new_string = (char *) malloc(sizeof(char) * size);

	if (new_string == NULL)
		return (NULL);

	/* Concatenate */
	for (i = 0; s1[i] != '\0'; i++)
		new_string[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		new_string[i + j] = s2[j];

	new_string[i + j] = '\0';

	return (new_string);
}
