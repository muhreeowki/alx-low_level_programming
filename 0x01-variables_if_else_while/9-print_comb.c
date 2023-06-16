#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	printf("\n");
}
