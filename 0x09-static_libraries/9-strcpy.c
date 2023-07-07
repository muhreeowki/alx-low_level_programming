#include "main.h"

/**
 * _strcpy - copies 'src' string to a 'dest' buffer
 *
 * @src: Pointer to string to be copied
 * @dest: Pointer to destination of copied string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = _strlen(src) + 1;

	for (i = 0; i < length; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
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
