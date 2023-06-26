#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: Address of string to reverse
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int mid = length / 2;
	int i;
	char temp;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}


/**
 * _strlen - Returns the length of a string
 *
 * @s: Address of the first char in the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char c;
	int i;

	i = 0;
	c = *s;

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}

	return (i);
}
