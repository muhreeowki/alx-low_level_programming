#include "main.h"

/**
 * more_numbers - prints the numbers 0 - 14
 */

void more_numbers(void)
{
	int i;
	int j;

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (j >= 10 )
			{
				if (j / 10 != 0)	
				{
					putchar(j / 10 + '0');
				}
			}
			putchar(j / 10 + '0');
		}
	}
	_putchar('\n');
}
