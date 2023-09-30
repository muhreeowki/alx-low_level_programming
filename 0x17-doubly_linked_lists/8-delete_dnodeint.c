#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 *
 * @head: head of a dlistint_t list.
 * @index: indext of the node to delete.
 *
 * Return: sum of elements
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL, *del_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		del_node = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(del_node);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (node == NULL)
			return (-2);
		node = node->next;
	}

	if (node && node->next && i == (index - 1))
	{
		del_node = node->next;
		node->next = del_node->next;
		if (node->next)
			node->next->prev = node;
		free(del_node);
		return (1);
	}

	return (-3);
}
