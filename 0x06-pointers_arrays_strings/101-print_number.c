#include "main.h"

/**
 * print_number - prints out a number to stdout
 *
 * @n: number
 */

void print_number(int n)
{
	int number;

	number = 0;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		number = number * 10 + (n % 10);
		n /= 10;
	}

	while (number > 0)
	{
		_putchar((number % 10) + '0');
		number /= 10;
	}
}


