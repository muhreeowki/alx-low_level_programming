#include "lists.h"

/**
 * free_list - frees a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *next;

	while (ptr)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
