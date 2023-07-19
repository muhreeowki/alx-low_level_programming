#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name to print
 * @f: callback function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	if (*name && f)
		f(name);

	else if (!f && name)
		for (i = 0; name[i]; i++)
			_putchar(name[i]);
}
