#include "main.h"

/**
 * more_numbers - prints the numbers 0 - 14
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if(i >= 10)
		{
			putchar(i / 10 + '0');
		}

		putchar(i % 10 + '0');
	}
	putchar('\n');
}
