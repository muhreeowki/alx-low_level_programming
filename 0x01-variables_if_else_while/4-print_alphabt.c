#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
}
