#include "lists.h"

/**
 * add_dnodeint - adds a node to a doubly linked list
 *
 * @head: head of a dlistint_t list.
 * @n: number to add to the node
 *
 * Return: number of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

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
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	else
		*head = node;

	return (node);
}
