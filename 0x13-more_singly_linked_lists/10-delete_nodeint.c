#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at @index of a listint_t list.
 *
 * @head: a pointer to the linked list
 *		  it means a pointer to the HEAD node.
 *
 * @index: the integer that identifies the position of the node
 *		   that will be deleted in the list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iterator;
	listint_t *future;
	listint_t *past;
	unsigned int i;


	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	iterator = *head;

	if (index == 0)
	{
		iterator = iterator->next;
		free(*head);
		*head = iterator;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (iterator->next == NULL)
		{
			return (-1);
		}

		iterator = iterator->next;
	}

	future = iterator->next->next;
	past = iterator;
	iterator = iterator->next;
	free(iterator);
	past->next = future;

	return (1);
}
