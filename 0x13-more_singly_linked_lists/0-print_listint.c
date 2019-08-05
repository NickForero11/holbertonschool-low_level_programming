#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: the const pointer to the list (it means the HEAD node).
 *
 * Return: the number of nodes of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *iterator;

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
