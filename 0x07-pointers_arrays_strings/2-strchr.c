#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to string to search
 * @c: char to search for
 *
 * Return: ponter s on success and NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
