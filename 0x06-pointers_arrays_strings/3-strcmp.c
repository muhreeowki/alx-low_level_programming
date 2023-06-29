#include "main.h"


/**
 * _strcmp - copmares two strings case sensitivly.
 *
 * @s1: pointer to string to be compared
 * @s2: pointer to string to compare to
 *
 * Return: 0 if strings are equal
 * 1 if the first non-matching character in str1 is greater than that of str2
 * -1 if the first non-matching character in str1 is less than that of str2
 */

int _strcmp(char *s1, char *s2)
{

	int i;

	i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);
		i++;
	}

	return (*(s1 + i) - *(s2 + i));
}


