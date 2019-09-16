#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * @n: the data(an integer) that will be saved in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *iterator;

	new = malloc(sizeof(dlistint_t));
	iterator = *head;

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!iterator)
	{
		*head = new;
		return (new);
	}

	while (iterator->next)
	{
		iterator = iterator->next;
	}

	single_connector(iterator, new);

	return (new);
}
