#include <stdio.h>
#include <math.h>

/* Function prototype */
void jack_bauer(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	jack_bauer();
	return (0);
}


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
			putchar(floor(hour / 10 + '0'));
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(floor(min / 10 + '0'));
			putchar(min % 10 + '0');
			putchar('\n');
			min++;
		}
		hour++;
	}
}
