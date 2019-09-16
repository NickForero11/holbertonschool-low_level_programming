#include "lists.h"

/**
 * single_connector - Links two dlistint_t nodes.
 *
 * @first_node: the base node.
 *
 * @second_node: the node that  will be linked.
 *
 * Return: always nothing(void).
 */

void single_connector(dlistint_t *first_node, dlistint_t *second_node)
{
	first_node->next = second_node;
	second_node->prev = first_node;
}

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
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
