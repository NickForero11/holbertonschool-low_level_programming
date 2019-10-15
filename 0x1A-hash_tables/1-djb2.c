#include "hash_tables.h"

/**
 * hash_djb2 - Hash generator function to get the index of every node.
 *
 * @str: the string that will be hashed to get it's index on the HashTable.
 *
 * Return: The hash value of the key for the HashTable.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
