#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * @idx: the integer that identifies the position of the new node in the list.
 *
 * @n: the data(an integer) that will be saved in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *iterator;
	listint_t *new;
	unsigned int i;

	if (!head || !(*head) || idx < 0)
	{
		return (NULL);
	}

	iterator = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *(head);
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (iterator->next == NULL)
		{
			return (NULL);
		}

		iterator = iterator->next;
	}

	new->next = iterator->next;
	iterator->next = new;

	return (new);
}
