#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: Address of the first char in the string
 */
void _puts(char *str)
{
	char c;
	int i;

	i = 0;
	c = *str;

	while (c != '\0')
	{
		i++;
		_putchar(c);
		c = *(str + i);
	}
	_putchar('\n');
}
