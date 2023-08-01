#include "lists.h"

/**
 * sum_listint - sums the data of all nodes in
 * a linked list.
 *
 * @head: pointer to the head of the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (0);


	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
