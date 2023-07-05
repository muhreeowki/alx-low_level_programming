#include "main.h"

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

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}

	return (0);
}
