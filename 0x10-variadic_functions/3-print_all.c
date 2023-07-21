#include "variadic_functions.h"

int _strlen(char *str);

/**
 * print_all - prints all arguments
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: sum of all arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str, *separator;

	i = 0;
	separator = "";

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;

				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;

				case 's':
					str = va_arg(args, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;

				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;

				default:
					i++;
					continue;
			}

			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);

}
