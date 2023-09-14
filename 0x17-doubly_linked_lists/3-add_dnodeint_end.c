#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 *
 * @head: head of a dlistint_t list.
 * @n: number to add to the node
 *
 * Return: number of elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *next = NULL, *node = NULL;

	/* create the node */
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);

	/* initialize the node */
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	/* check the existance of the head node */
	if (head && *head)
	{
		next = *head;
		while(next->next)
			next = next->next;

		node->prev = next;
		next->next = node;
	}
	else
		*head = node;

	return (node);
}
