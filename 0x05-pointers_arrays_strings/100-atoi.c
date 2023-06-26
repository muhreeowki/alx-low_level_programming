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
	unsigned int value;
	int totalnums;
	int test_int;

	value = 0;
	totalnums = 0;
	length = _strlen(s);
	test_int = 1;

	for (i = 0; i < length; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			while (*(s + i) >= 48 && *(s + i) <= 57)
			{
				totalnums++;
				num = *(s + i);
				value = value * 10 + (num - 48);
				i++;
			}
			break;
		}
	}

	if (totalnums < 1)
		return (0);

	if (value != 0)
	{
		for (j = 0; j < i; j++)
		{
			if (*(s + j) == '-')
				test_int = -test_int;
			if (*(s + j) == '+')
				test_int = +test_int;
		}
	}

	if (test_int == -1)
		return (-value);

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
