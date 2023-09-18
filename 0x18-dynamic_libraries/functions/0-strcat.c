#include "main.h"


/**
 * _strcat - Concatantes two strings together.
 *
 * @src: pointer to string that is being appended
 * @dest: pointer to string that is being concatanated
 *
 * Return: Pointer to concatanted string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char c;

	i = 0;
	j = 0;
	c = ' ';

	while (c != '\0')
	{
		c = *(dest + i);
		i++;
	}

	i--;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = *(src + j);

	return (dest);
}
