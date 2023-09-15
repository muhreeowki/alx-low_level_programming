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
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	if (node && node->next)
	{
		del_node = node;
		del_node->prev->next = del_node->next;
		del_node->next->prev = del_node->prev;
		free(del_node);
		return (1);
	}

	return (-1);
}
