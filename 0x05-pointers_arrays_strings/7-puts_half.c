#include "main.h"

/**
 * puts_half - prints second half of a string to stdout
 *
 * @str: Address of the string to be printed
 */
void puts_half(char *str)
{

	int length;
	int half;
	int i;

	length = _strlen(str) + 1;
	half = floor(length / 2);

	for (i = half; i < length - 1; i++)
	{
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
