#include "main.h"
#include <stddef.h>


/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to string to search
 * @accept: string of chars to accept
 *
 * Return: ponter s on success and NULL otherwise
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j, count, match;

	count = 0;
	match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				count++;
				break;
			}
		}

		if (match == 0 && count > 0)
			return (count);

		match = 0;
	}

	if (count > 0)
		return (count);

	return (0);
}
