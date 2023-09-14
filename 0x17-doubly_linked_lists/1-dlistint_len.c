#include "lists.h"

/**
 * dlistint_len - counts the number of lists
 *
 * @h: head of a dlistint_t list.
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
