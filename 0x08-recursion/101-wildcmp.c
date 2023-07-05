#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * find_char - finds char c in string s
 *
 * @c: character
 * @s: pointer to string
 *
 * Return: pointer to string or NULL if char c not found
 */

char *find_char(char *s, char c)
{
	if (*s == '\0')
		return (NULL);

	if (*s == c)
		return (s - 1);

	return (find_char(s + 1, c));
}


/**
 * wildcmp - compares 2 strings, however the * char
 * can replace any string
 *
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: 1 (strings are same) 0 (not the same)
 */
int wildcmp(char *s1, char *s2)
{

	char *temp;

	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	else if (*s1 == *s2 && *s1 == '\0')
		return (1);

	else if (*s1 == *s2 && *s1 == '\0')
		return (1);

	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		if (*(s2 + 1) != '*')
		{
			temp = find_char(s1, *(s2 + 1));

			if (temp != NULL)
				s1 = temp;

			else
				return (0);
		}
	}

	else if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
