#include <stdio.h>
#include <math.h>
#include "main.h"


void print_times_table(int n);


int main(void) 
{
	print_times_table(10);
}

/**
 * times_table - Prints the times table for base 10 numbers
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
				putchar(floor(product / 10) + '0');
				putchar(product % 10 + '0');
			}
			else
				putchar(product + '0');

			if (x != n - 1)
			{
				putchar(',');
				putchar(' ');
				if ((x + 1) * y < 10)
					putchar(' ');
			}
			x++;
		}
		putchar('\n');
		y++;
	}

}
