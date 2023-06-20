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
 * _isalpha - Checks if a char is alphabetical or not
 *
 * @c: ASCII value of the char
 *
 * Return: 0 if alpha, 1 otherwise
 */

int _isalpha(int c)
{
	if (c < 65 || c > 122 || (c > 90 && c < 97)
	{
		return (1);
	}
	return (0);
}

