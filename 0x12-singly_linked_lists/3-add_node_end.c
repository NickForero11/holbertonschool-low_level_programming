#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * @str: the data(a string) that will be saved in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *iterator;

	new = malloc(sizeof(list_t));
	iterator = *head;

	if (!new || !str)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
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

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The const char pointer of the string that will be checked
 *
 * Return: the length of a string in a integer value.
 *
 */

int _strlen(const char *s)
{
	int digits;

	digits = 0;
	while (*(s + digits) != '\0')
	{
		digits++;
	}
	return (digits);
}
