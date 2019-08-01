#include "lists.h"

/**
 * free_list - Frees a list_t list.
 *
 * @head: a pointer to the pointer of the list
 *		  it means a pointer to the pointer of the HEAD node.
 *
 * Return: Always nothing(void).
 */

void free_list(list_t *head)
{
	list_t *iterator;

	iterator = head;

	while (head)
	{
		iterator = iterator->next;
		free(head->str);
		free(head);
		head = iterator;
	}
}
