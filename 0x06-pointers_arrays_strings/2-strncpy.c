#include "main.h"


/**
 * _strncpy - Copies a string
 *
 * @src: pointer to string that is being coppied
 * @dest: pointer to destination of the coppied string
 * @n: number of bytes to copy from src
 *
 * Return: Pointer to the coppied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
