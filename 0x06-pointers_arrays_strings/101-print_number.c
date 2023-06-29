#include "main.h"

/**
 * print_number - encodes a string into rot13 format
 *
 * @s: Pointer to the string
 *
 * Return: Pointer to the string
 */

void print_number(int n)
{
	int number;

	number = 0;

	if (n == 0)
		putchar('0');

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		number = number * 10 + (n % 10);
		n /= 10;
	}

	while (number > 0)
	{
		putchar((number % 10) + '0');
		number /= 10;
	}
}


