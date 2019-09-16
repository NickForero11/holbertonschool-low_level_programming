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
 * get_dnodeint_at_index - Find the nth node of a dlistint_t list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * @index: the integer that identifies the position of the node in the list.
 *
 * Return: the nth node of a dlistint_t list or NULL if the node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		dlistint_t *iterator;
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
