#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98 in order.
 *
 * @n: Integer to start counting from
 */
void print_to_98(int n)
{
	int step;

	if (n > 98)
	{
		step = -1;
	}
	else
	{
		step = 1;
	}

	while (n != 98)
	{
		_printnum(n);
		_putchar(',');
		_putchar(' ');
		n += step;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

/**
 * print_num - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void _printnum(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		_printnum(n / 10);

	putchar(n % 10 + '0');
}
