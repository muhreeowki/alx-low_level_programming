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
	int i, j;


	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		j = 0;

		while (*(haystack + (i + j)) == *(needle + j) && *(needle + j) != '\0')
			j++;

		if (*(needle + j) == '\0')
			return ((haystack + i));
	}

	return (NULL);
}
