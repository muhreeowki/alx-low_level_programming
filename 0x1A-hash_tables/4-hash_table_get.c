#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: hash table to add the value to
 * @key: key to value
 *
 * Return: the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* get the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* search for the key */
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, (char *)key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
