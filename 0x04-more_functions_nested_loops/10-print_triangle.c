#include "main.h"

/**
 * print_triangle - prints a triangle of size 'size'
 *
 * @size: number representing size of square
 */

void print_triangle(int size)
{
	int i;
	int j;
	int s;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 1; i <= size ; i++)
	{
		for (s = size - i; s > 0; s--)
		{
			putchar(' ');
		}
		for (j = i; j > 0; j--)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
