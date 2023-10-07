#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int printed = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				if (printed == 0)
				{
					printf("'%s': '%s'", node->key, node->value);
					printed = 1;
					continue;
				}

				while (node)
				{
					printf(", '%s': '%s'", node->key, node->value);
					node = node->next;
				}
			}
		}
		printf("}\n");
	}
}
