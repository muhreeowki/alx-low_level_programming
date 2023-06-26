#include "main.h"

/**
 * _atoi - converts a string to an int
 *
 * @s: Pointer to string to converted
 *
 * Return: dest
 */
int _atoi(char *s)
{
	int length;
	int i;
	int j;
	int num;
	int value;

	value = 0;
	length = _strlen(s);


	for (i = 0; i < length; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			j = i;
			while (*(s + j) >= 48 && *(s + j) <= 57)
			{
				num = *(s + j);
				value = value * 10 + (num - 48);
				j++;
			}
			break;
		}
	}

	for (i = 0; i < j; i++)
	{
		if (*(s + i) == '-')
			value = -value;
		if (*(s + i) == '+')
			value = +value;
	}

	return (value);
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
