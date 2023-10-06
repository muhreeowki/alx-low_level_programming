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
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool1");
    hash_table_set(ht, "heta", "cool2");
    hash_table_set(ht, "heliotropes", "cool3");
    hash_table_set(ht, "depravement", "cool4");
    hash_table_set(ht, "mentioner", "cool5");
    hash_table_set(ht, "neurospora", "cool6");
    hash_table_set(ht, "serafins", "cool7");
    return (EXIT_SUCCESS);
}
