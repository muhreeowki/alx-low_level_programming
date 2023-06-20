#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	return (0);
}


/**
 * _islower - Checks if a char is lowercase or not
 *
 * @c: ASCII value of the char
 *
 * Return: 0 if lowercase, 1 otherwise
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (1);
	}
	return (0);
}

