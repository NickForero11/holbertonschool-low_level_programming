#include "hash_tables.h"

/**
 * hash_table_get - Search the value of a key in a hashTable.
 *
 * @ht: the pointer to the first bucket in the hashTable,
 *		or the array of buckets of the hashTable.
 *
 * @key: the key of the new node, which can be alredy in the hashTable or not.
 *
 * Return: the value associated with the key, or NULL if key can't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *iterator;

	if (ht == NULL)
	{
		return (0);
	}

	index = key_index((unsigned const char *) key, ht->size);

	iterator = (ht->array)[index];

	if (iterator == NULL)
	{
		return (0);
	}

	while (iterator != NULL)
	{
		if (strcmp(iterator->key, key) == 0)
		{
			return (iterator->value);
		}

		iterator = iterator->next;
	}

	return (NULL);
}
