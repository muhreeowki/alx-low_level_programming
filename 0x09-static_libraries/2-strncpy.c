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

	while (i < n)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			break;
		}
			i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
