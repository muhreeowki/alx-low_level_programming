#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int i;
	int j;

	for (n = 48; n <= 55; n++)
	{
		for (i = n + 1; i <= 56; i++)
		{
			for (j = i + 1; j <= 57; j++)
			{
				putchar(n);
				putchar(i);
				putchar(j);
				if (n == 55)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
