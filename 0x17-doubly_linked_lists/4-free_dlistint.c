#include "lists.h"

/**
 * free_dlistint - frees a linked list
 *
 * @head: head of a dlistint_t list.
 *
 * Return: number of elements
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL, *curr = NULL;

	/* check the existance of the head node */
	if (head)
	{
		curr = head;
		while (curr)
		{
			next = curr->next;
			free(curr);
			curr = next;
		}
	}
}
