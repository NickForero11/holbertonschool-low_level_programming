#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * Return: Always nothing(void).
 */

void free_listint(listint_t *head)
{
	listint_t *iterator;

	iterator = head;

	while (head)
	{
		iterator = iterator->next;
		free(head);
		head = iterator;
	}
}
