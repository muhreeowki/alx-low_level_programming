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
	int i, length1, length2;

	length1 = 0;
	length2 = 0;
	i = 0;

	/* Check the lengths */
	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (length1 > length2)
		return (1);

	else if (length1 < length2)
		return (-1);

	/* Check the characters */
	for (i = 0; i < length1 - 1; i++)
	{
		if (s1[i] > s2[i])
			return (1);

		if (s1[i] < s2[i])
			return (-1);
	}

	return (0);
}


