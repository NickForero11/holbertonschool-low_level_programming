#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * Return: Always nothing(void).
 */

void free_listint2(listint_t **head)
{
	listint_t *iterator;
	listint_t *future;

	if (head && *head)
	{
		iterator = *head;
		while (iterator)
		{
			future = iterator->next;
			free(iterator);
			iterator = future;
		}
		*head = NULL;
		head = NULL;
	}
}
