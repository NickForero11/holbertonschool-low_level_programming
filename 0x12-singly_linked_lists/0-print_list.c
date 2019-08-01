#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: the const pointer to the list (it means the HEAD node).
 *
 * Return: the number of nodes of the list.
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *iterator;
	int len;
	char *string;

	count = 0;
	iterator = h;

	while (iterator)
	{
		count++;

		len = iterator->str ? iterator->len : 0;
		string = iterator->str ? iterator->str : "(nil)";

		printf("[%d] %s\n", len, string);

		iterator = iterator->next;
	}

	return (count);
}
