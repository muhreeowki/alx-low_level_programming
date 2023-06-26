#include "main.h"

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

	while(c != '\0')
	{
		i++;
		c = *(s + i);
	}

	return (i);
}
