#include "lists.h"

/**
 * sum_listint - Compute the sum of all the data of a listint_t linked list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * Return: the sum of all the data (integers) of a listint_t linked list
 *		   or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *iterator;
	int response;

	iterator = head;
	response = 0;

	if (!head)
	{
		return (0);
	}

	while (iterator)
	{
		response += iterator->n;
		iterator = iterator->next;
	}

	return (response);
}
