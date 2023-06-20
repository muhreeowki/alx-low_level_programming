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
	putchar(r + '0');
	putchar('\n');
	return (r);
}

