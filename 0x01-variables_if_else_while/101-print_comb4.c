#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	for (int n = 48; n <= 55; n++)
	{
		for (int i = n + 1; i <= 56; i++)
		{
			for (int j = i + 1; j <= 57; j++)
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
