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
	dlistint_t *curr_node = NULL, *new_node = NULL;

	/* create the node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (new_node);

	/* initialize the node */
	new_node->n = n;
	new_node->next = NULL;

	/* check the existance of the head node */
	if (head && *head)
	{
		curr_node = *head;
		while (curr_node->next)
			curr_node = curr_node->next;

		new_node->prev = curr_node;
		curr_node->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
