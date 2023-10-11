#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "y", "1");
    shash_table_print(ht);
    shash_table_set(ht, "y", "2");
    shash_table_print(ht);
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
