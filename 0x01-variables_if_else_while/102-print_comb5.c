#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;
	int n;
	int i;
	int j;

	for (x = 48; x <= 57; x++)
	{
		for (n = 48; n <= 56; n++)
		{
			for (i = 48; i <= 57; i++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (i == 48 && n == 48 && x == 48)
						j = 49;
					putchar(x);
					putchar(n);
					putchar(' ');
					putchar(i);
					putchar(j);
					if (x == 57 && n == 56 && i == 57 && j == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
