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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
		return (NULL);

	while (i < len1)
	{
		newstr[i] = s1[i];
		i++;
	}

	while (n >= len2 && i < (len1 + len2))
		newstr[i++] = s2[j++];

	while (n < len2 && i < (len1 + n))
		newstr[i++] = s2[j++];

	newstr[i] = '\0';

	return (newstr);
}
