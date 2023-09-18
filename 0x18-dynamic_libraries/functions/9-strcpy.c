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
