#include <stdio.h>
#include "main.h"


/**
 * _abs - computes the absolute value of a number.
 *
 * @n: any number
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}


