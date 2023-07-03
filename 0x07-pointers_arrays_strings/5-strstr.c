#include "main.h"
#include <stddef.h>


/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack
 *
 * @haystack: pointer to string to search
 * @needle: substring to look for
 *
 * Return: poniter needle or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{

	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;

				else if (needle[j + 1] == '\0')
					return (haystack + i);
			}
		}
	}

	return (NULL);
}