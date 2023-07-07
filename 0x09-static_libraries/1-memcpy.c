#include "main.h"


/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @src: pointer to memory area to copy from
 * @dest: pointer to memory area to copy to
 * @n: number of bytes to copy
 *
 * Return: ponter dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
