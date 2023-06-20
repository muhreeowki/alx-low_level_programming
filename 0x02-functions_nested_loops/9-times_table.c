#include <stdio.h>
#include <math.h>
#include "main.h"


/**
 * times_table - Prints the times table for base 10 numbers
 */
void times_table(void)
{
	int x;
	int y;
	int product;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			product = y * x;
			if (product >= 10)
			{
				putchar(floor(product / 10) + '0');
				putchar(product % 10 + '0');
			}
			else
				putchar(product + '0');

			if (x != 9)
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
