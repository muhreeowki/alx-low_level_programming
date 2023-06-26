#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: Address of string to print
 */
void puts2(char *str)
{
	int i;
	int length;

	i = 0;
	length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i % 2 != 0)
			continue;
		putchar(*(str + i));
	}
	putchar('\n');
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: Address of the first char in the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char c;
	int i;

	i = 0;
	c = *s;

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}

	return (i);
}
