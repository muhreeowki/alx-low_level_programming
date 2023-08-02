#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 *
 * @head: pointer to the head of the linked list
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *next;

	while (ptr)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}

	*head = NULL;
}
