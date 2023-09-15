#include "lists.h"

/**
 * sum_dlistint - sums up a list of data in a linked list
 *
 * @head: head of a dlistint_t list.
 *
 * Return: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
