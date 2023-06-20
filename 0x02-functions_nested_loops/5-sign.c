#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: ASCII value of the char
 *
 * Return: 0 if n is 0, 1 if n > 0 and -1 if n < 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}


