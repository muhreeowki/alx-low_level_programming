#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 *
 * @str: pointer to string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}


/**
 * string_nconcat - concatenates n chars from s2 to s1
 *
 * @s1: String 1
 * @s2: String 2
 * @n: number of chars to concatenate
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i, j, len1, len2;

	if (s2 == NULL)
		*s2 = '\0';
	if (s1 == NULL)
		*s1 = '\0';

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = '\0';

	return (newstr);
}
