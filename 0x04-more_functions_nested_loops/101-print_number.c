#include "main.h"

/**
 * print_number - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
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
