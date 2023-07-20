#include "variadic_functions.h"
#include <stdarg.h>

/**
 *
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
