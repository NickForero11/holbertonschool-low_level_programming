#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked listint_t list.
 *
 * @h: the const pointer to the list (it means the HEAD node).
 *
 * Return: the number of nodes(elements) of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *iterator;

	count = 0;
	iterator = h;

	while (iterator)
	{
		count++;
		iterator = iterator->next;
	}

	return (count);
}
