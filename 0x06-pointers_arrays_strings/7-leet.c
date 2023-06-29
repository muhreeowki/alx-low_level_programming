#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: Pointer to the string
 *
 * Return: Pointer to the string
 */

char *leet(char *s)
{
	int i, j, n;
	char numbers[] = "43071";
	char letters[] = "aeotl";

	n = 5;
	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < n; j++)
		{
			if (s[i] == letters[j] || (s[i] + 32) == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
