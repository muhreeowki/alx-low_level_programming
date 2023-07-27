#include "lists.h"

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *list = h; 

	while (list != NULL)
	{
		printf("[%d] %s\n", list->len, list->str);
		count++;
		list = list->next;
	}

	return (count);
}
