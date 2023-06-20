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
		print_num(n);
		putchar(',');
		putchar(' ');
		n += step;
	}
	putchar('9');
	putchar('8');
	putchar('\n');
}


/**
 * print_num - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void print_num(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_num(n / 10);

	putchar(n % 10 + '0');
}








