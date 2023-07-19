#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name to print
 * @f: callback function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name)
	{

		if (f)
			f(name);
		else
		{
			while (*name != '\0')
				_putchar(*name++);
		}
	}
}
