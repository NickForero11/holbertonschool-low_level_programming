#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 *                            of another node.
 *
 * @parent: The parent (or father) node of the new node.
 *
 * @value: The data inside the new node.
 *
 * Return: A pointer to the added binary tree node
 *         NULL otherwise.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_child = binary_tree_node(parent, value);

	if (right_child == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		parent->right->parent = right_child;

		right_child->right = parent->right;
	}

	parent->right = right_child;

	return (right_child);
}
