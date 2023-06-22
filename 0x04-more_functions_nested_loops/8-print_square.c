#include "main.h"

/**
 * print_square - prints a square of size 'size'
 *
 * @size: number representing size of square
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
