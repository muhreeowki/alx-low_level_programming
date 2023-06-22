#include "main.h"

/**
 * print_line - prints n number of underscores
 *
 * @n: number of underscores to print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
