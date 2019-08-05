#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * Return: the head node’s data (@n) or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int response;
	listint_t *iterator;

	if (*head == NULL)
	{
		return (0);
	}

	iterator = *head;
	response = iterator->n;
	*head = iterator->next;
	free(iterator);

	return (response);
}
