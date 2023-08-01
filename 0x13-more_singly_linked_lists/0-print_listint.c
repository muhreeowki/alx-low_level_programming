#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *item = h;

	while (item)
	{
		if (item->n < 0)
			_putchar('-');
		print_number(item->n);
		_putchar('\n');
		item = item->next;
		i++;
	}

	return (i);
}

/**
 * _print_number - Print an unsigned integer to stdout.
 *
 * @n: The unsigned integer to convert and print.
 *
 * Return: None (void).
 */
void print_number(unsigned long int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar('0' + n % 10);
}
