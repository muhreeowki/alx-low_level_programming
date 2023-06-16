#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(floor(i / 10) + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(floor(j / 10) + 48);
			putchar(j % 10 + 48);
			if (i >= 98 && j >= 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
