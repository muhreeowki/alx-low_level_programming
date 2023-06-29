#include "main.h"

/**
 * cap_string - Capitalizes every word in a string
 *
 * @s: Pointer to the string
 *
 * Return: Pointer to the string
 */

char *cap_string(char *s)
{
	int i, j, n;
	int seperators[] = {9, 11, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	n = 14; /* number of seperators */
	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < n; j++)
		{
			if (s[i] == seperators[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
			}
		}
		i++;
	}

	return (s);
}
