#include "lists.h"

/**
 * sum_dlistint - Compute the sum of all the data of a dlistint_t list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * Return: the sum of all the data (integers) of a dlistint_t list.
 *		   or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;
	int response;

	iterator = head;
	response = 0;

	if (!head)
	{
		return (response);
	}

	while (iterator)
	{
		response += iterator->n;
		iterator = iterator->next;
	}

	return (response);
}
