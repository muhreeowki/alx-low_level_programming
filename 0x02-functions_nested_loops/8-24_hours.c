#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of a day
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;
	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(floor(hour / 10 + '0'));
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(floor(min / 10 + '0'));
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
