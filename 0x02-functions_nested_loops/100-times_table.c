#include <stdio.h>
#include <math.h>
#include "main.h"


/**
 * print_times_table - Prints the times table for n until n * n
 *
 * @n: Integer value for the times table to be printed
 */
void print_times_table(int n)
{
	int x;
	int y;
	int product;

	if(n < 0 || n > 15)
		n = 0;

	y = 0;
	while (y <= n)
	{
		x = 0;
		while (x <= n)
		{
			product = y * x;
			if (product >= 10)
			{
				print_number(product);
			}
			else
				_putchar(product + '0');

			if (x != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((x + 1) * y < 10)
					_putchar(' ');
				if ((x + 1) * y < 100)
					_putchar(' ');
			}
			x++;
		}
		_putchar('\n');
		y++;
	}

}


/**
 * print_number - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
