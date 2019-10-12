#include "hash_tables.h"

/**
 * hash_table_create - Creates a HashTable in the heap.
 *
 * @size: the number of buckets that will store.
 *
 * Return: a pointer to the newly created hash table, otherwise NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	hash_node_t **buckets;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
	{
		return (0);
	}

	hashTable->size = size;
	buckets = calloc(size, sizeof(hash_node_t *));
	if (!buckets)
	{
		return (0);
	}

	hashTable->array = buckets;
	return (hashTable);
}
