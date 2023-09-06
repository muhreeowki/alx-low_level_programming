#include "lists.h"

/**
 * free_listint_safe - frees a linked list with a loop in it
 *
 * @h: Head of the linked list
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	const listint_t *item, *next, **list;
	int i, loop = 0, start = 1;

	if (h == NULL || *h == NULL)
		return (0);

	list = make_pointer_list(*h, NULL, 1);
	item = *h;

	/* Collect all the pointers */
	while (item != NULL && loop == 0)
	{
		/* Check if item is in list */
		for (i = 0; list[i] != NULL; i++)
		{
			if (start == 1)
			{
				start = 0;
				break;
			}
			if ((void *)list[i] == (void *)item)
			{
				loop = 1;
				break;
			}
		}
		if (loop == 1)
			break;
		count++;
		list = make_pointer_list(item, list, count);
		if (list == NULL)
			exit(98);
		item = item->next;
	}

	item = *h;
	for (i = 0; list[i] != NULL; i++)
	{
		if (item != NULL)
		{
			next = item->next;
			free((listint_t *)item);
			item = next;
		}
	}
	*h = NULL;

	free(list);
	return (count);
}
