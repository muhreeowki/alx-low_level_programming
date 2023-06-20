#include <stdio.h>
#include "main.h"


/**
 * _isalpha - Checks if a char is alphabetical or not
 *
 * @c: ASCII value of the char
 *
 * Return: 0 if alpha, 1 otherwise
 */

int _isalpha(int c)
{
	if (c < 65 || c > 122 || (c > 90 && c < 97))
	{
		return (0);
	}
	return (1);
}

