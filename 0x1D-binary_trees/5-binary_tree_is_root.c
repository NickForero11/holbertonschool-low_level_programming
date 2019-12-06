#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root (node without parent).
 *
 * @node: The pointer to the node that will be checked.
 *
 * Return: 1 if is a root otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->parent == NULL ? 1 : 0);
}
