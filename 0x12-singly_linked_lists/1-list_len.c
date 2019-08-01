#include "lists.h"

/**
 * list_len - Computes the number of elements in a linked list_t list.
 *
 * @h: the const pointer to the list (it means the HEAD node).
 *
 * Return: the number of nodes(elements) of the list.
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *iterator;

	count = 0;
	iterator = h;

	while (iterator)
	{
		count++;
		iterator = iterator->next;
	}

	return (count);
}
