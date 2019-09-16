#include "lists.h"

/**
 * dlistint_len - Computes the number of elements in a linked dlistint_t list.
 *
 * @h: the const pointer to the list (it means the HEAD node).
 *
 * Return: the number of nodes(elements) of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *iterator;

	count = 0;
	iterator = h;

	while (iterator)
	{
		count++;
		iterator = iterator->next;
	}

	return (count);
}
