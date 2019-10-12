#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a HashTable.
 *
 * @key: the string that represents the key (given as a hashed value).
 *
 * @size: the size of the HashTable (or it's array by definition).
 *
 * Return: the index at which the key/value pair should be stored
 *			in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
