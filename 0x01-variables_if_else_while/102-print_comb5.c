#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int x = 48; x <= 57; x++)
	{
		for (int n = 48; n <= 56; n++)
		{
			for (int i = 48; i <= 57; i++)
			{
				for (int j = 49; j <= 57; j++)
				{
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
}
