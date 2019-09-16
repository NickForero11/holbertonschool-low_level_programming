#include "lists.h"

/**
 * print_list - Prints all the elements of a dlistint_t list.
 *
 * @h: the const pointer to the list (it means the HEAD node).
 *
 * Return: the number of nodes of the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *iterator;

	count = 0;
	iterator = h;

	while (iterator)
	{
		count++;
		printf("%d\n", iterator->n);
		iterator = iterator->next;
	}

	return (count);
}
