#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list argslist;

	unsigned int i, sum = 0;

	va_start(argslist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argslist, int);

	va_end(argslist);

	return (sum);
}
