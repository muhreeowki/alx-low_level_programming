#include "lists.h"

/**
 * print_listint - Print each item in a linked list
 *
 * @h: Head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *item = h;

	while (item != NULL)
	{
		printf("%d\n", item->n);
		item = item->next;
		count++;
	}

	return (count);
}
