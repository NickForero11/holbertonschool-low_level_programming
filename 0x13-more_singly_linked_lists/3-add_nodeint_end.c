#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * @n: the data(an integer) that will be saved in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *iterator;

	new = malloc(sizeof(listint_t));
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

	iterator->next = new;

	return (new);
}
