#include "lists.h"

/**
 * free_list - frees a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next;

	while (ptr)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
