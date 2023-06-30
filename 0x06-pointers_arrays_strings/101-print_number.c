#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints out a number to stdout
 *
 * @n: number
 */

void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 > 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);
}
