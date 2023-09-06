#include "lists.h"

/**
 * free_listint_safe - frees a linked list with a loop in it
 *
 * @h: Head of the linked list
 *
 * Return: number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t count = 0;
	const listint_t *item, **list;
	int i, start = 1;

	if (head == NULL)
		return (0);

	list = make_pointer_list(head, NULL, 1);
	item = head;

	while (item != NULL)
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
				free(list);
				return ((listint_t *) item);
			}
		}
		count++;
		list = make_pointer_list(item, list, count);
		if (list == NULL)
			exit(98);
		item = item->next;
	}

	free(list);
	return (NULL);
}
