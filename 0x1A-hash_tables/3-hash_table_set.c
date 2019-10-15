#include "hash_tables.h"

/**
 * addBucket - Add a Bucket on a hashTable at specific index by an hashed key.
 *
 * @head: the pointer to the first bucket in the hashTable,
 *		 or the array of buckets of the hashTable.
 *
 * @key: the key of the new node, which can be alredy in the hashTable or not.
 *
 * @value: the data that will store the new node, which is a string.
 *
 * Return: a pointer to the new bucket or NULL otherwise.
 */

int addBucket(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *bucket;

	if (head == NULL)
	{
		return (0);
	}

	bucket = malloc(sizeof(hash_node_t));

	if (bucket == NULL)
	{
		return (0);
	}

	bucket->key = strdup(key);
	bucket->value = strdup(value);
	bucket->next = *head;

	*head = bucket;

	return (1);
}

/**
 * setValue - Checks if already exist a node with a specific key in a hashTable
 *			 if found one then it will update it's value.
 *
 * @h: the initial bucket of the hashTable that were the node will be added.
 *
 * @key: the key of the new node, which can be alredy in the hashTable or not.
 *
 * @value: the data that will store the new node, which is a string.
 *
 * Return: 1 if found a node with same key and replaces it's value or
 *		  0 otherwise.
 */

int setValue(const hash_node_t *h, const char *key, const char *value)
{
	hash_node_t *bucket = (hash_node_t *) h;

	while (bucket != NULL)
	{
		if (strcmp(bucket->key, key) == 0)
		{
			free(bucket->value);
			bucket->value = strdup(value);
			return (1);
		}

		bucket = bucket->next;
	}

	return (0);
}

/**
 * hash_table_set - Adds or updates an element on a hash table.
 *
 * @ht:  the pointer to the first bucket in the hashTable,
 *		or the array of buckets of the hashTable.
 *
 * @key: the key of the new node, which can be alredy in the hashTable or not.
 *
 * @value: the data that will store the new node, which is a string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
	{
		return (0);
	}

	index = key_index((unsigned const char *) key, ht->size);

	if (setValue(ht->array[index], key, value) == 0)
	{
		if (addBucket(&(ht->array[index]), key, value) == 0)
		{
			return (0);
		}
	}

	return (1);
}
