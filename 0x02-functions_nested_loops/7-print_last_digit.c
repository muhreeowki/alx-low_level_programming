#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - computes the absolute value of a number.
 *
 * @n: any number
 *
 * Return: the absolute value of n
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if(r < 0)
		r *= -1;
	_putchar(r + '0');
	return (r);
}


