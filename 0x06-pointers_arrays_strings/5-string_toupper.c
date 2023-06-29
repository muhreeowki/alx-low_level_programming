#include "main.h"

/**
 * string_toupper - Changes every lowercase char in a string
 * to uppercase
 *
 * @s: Pointer to the string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
