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
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * @n: the data(an integer) that will be saved in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;

	if (*head != NULL)
	{
		single_connector(new, *head);
	}

	*head = new;

	return (*head);
}
