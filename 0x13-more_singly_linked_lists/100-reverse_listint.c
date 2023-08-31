#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 *
 * @head: pointer to the head of the linked list
 *
 * Return: the node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head, *next = NULL, *prev = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return (*head);
}
