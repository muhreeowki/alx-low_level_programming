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
	const listint_t *item, **list;
	int i, loop = 0, start = 1;

	if (h == NULL || *h == NULL)
		return (0);

	list = make_pointer_list(*h, NULL, 1);
	item = *h;

	while (item != NULL && loop == 0)
	{
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

	for (i = 1; list[i] != NULL; i++)
		free((listint_t *) list[i]);

	*h = NULL;
	free(list);
	return (i - 1);
}
