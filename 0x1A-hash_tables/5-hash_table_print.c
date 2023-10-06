#include "hash_tables.h"

/**
 * print_hash_table - function that prints a hash table
 *
 * @ht: hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s', ", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
