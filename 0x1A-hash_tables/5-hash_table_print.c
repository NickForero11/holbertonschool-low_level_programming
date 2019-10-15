#include "hash_tables.h"

/**
 * hash_table_print - Prints all the elements of a Hash Table
 *					  in a format of a Python dictionary, it means
 *					  in the order that they appear in the array of buckets.
 *
 * @ht: the pointer to the first bucket in the hashTable,
 *		or the array of buckets of the hashTable.
 *
 * Return: always nothing (void).
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int bucket_index;
	int key_index;
	hash_node_t *iterator;

	key_index = 0;

	if (ht != NULL)
	{
		putchar('{');

		for (bucket_index = 0; bucket_index < ht->size; bucket_index++)
		{
			iterator = (ht->array)[bucket_index];

			if (iterator != NULL)
			{
				while (iterator != NULL)
				{
					if (key_index != 0)
					{
						printf(", ");
					}

					printf("'%s': '%s'", iterator->key, iterator->value);

					iterator = iterator->next;
					key_index++;

				}
			}
		}

		puts("}");
	}
}
