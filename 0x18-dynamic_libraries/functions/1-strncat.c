#include "main.h"


/**
 * _strncat - Concatantes two strings together.
 * However only concatantes n number of bytes.
 *
 * @src: pointer to string that is being appended
 * @dest: pointer to string that is being concatanated
 * @n: number of bytes to concatanet
 *
 * Return: Pointer to concatanted string
 */

char *_strncat(char *dest, char *src, int n)
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

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
