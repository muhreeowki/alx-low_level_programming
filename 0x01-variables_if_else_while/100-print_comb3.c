#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int i = 48; i <= 56; i++)
	{
		for (int j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
