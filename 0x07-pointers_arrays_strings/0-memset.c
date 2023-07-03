#include "main.h"


/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: pointer to memory area
 * @n: number of bytes to fill
 * @b: constant byte to fill with
 *
 * Return: ponter s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
