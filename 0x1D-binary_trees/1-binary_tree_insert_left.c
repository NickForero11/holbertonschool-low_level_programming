#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 *                           of another node.
 *
 * @parent: The parent (or father) node of the new node.
 *
 * @value: The data inside the new node.
 *
 * Return: A pointer to the added binary tree node
 *         NULL otherwise.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_child = binary_tree_node(parent, value);

	if (left_child == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		parent->left->parent = left_child;

		left_child->left = parent->left;
	}

	parent->left = left_child;

	return (left_child);
}
