#include "lists.h"

/**
 * print_list - prints a linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str != NULL)
			printf("[%d] %s\n", list->len, list->str);
		else
			printf("[0] (nil)\n");

		count++;
		list = list->next;
	}

	return (count);
}
