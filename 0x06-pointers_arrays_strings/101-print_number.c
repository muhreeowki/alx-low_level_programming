#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints out a number to stdout
 *
 * @n: number
 */

void print_number(int n)
{
	unsigned int number;
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	number = n;

	if (number / 10 > 0)
	{
		print_number(number / 10);
	}

	_putchar((number % 10) + 48);
}
