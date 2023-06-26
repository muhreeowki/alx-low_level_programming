#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 *
 * @s: Address of the first char in the string
 */
void print_rev(char *s)
{
	char c;
	int i;

	i = 0;
	c = *s;

	/* Find the length of the string */
	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}

	/* Set c to the last char */
	c = *(s + i);

	/* Print the string in reverse */
	while (i >= 0)
	{
		i--;
		putchar(c);
		c = *(s + i);
	}
	putchar('\n');
}
