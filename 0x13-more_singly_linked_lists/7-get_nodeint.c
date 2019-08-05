#include "lists.h"

/**
 * get_nodeint_at_index - Find the nth node of a listint_t linked list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * @index: the integer that identifies the position of the node in the list.
 *
 * Return: the nth node of a listint_t list or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *iterator;
	unsigned int i;

	iterator = head;

	if (!head)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		if (iterator->next == NULL)
		{
			return (NULL);
		}

		iterator = iterator->next;
	}

	return (iterator);
}
