#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node inside a binary tree.
 *
 * @tree: The pointer of the tree that will be measured.
 *
 * Return: The depth of the node as a size_t value.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
	{
		return (depth);
	}

	for (tree = tree->parent; tree != NULL; tree = tree->parent)
	{
		depth++;
	}

	return (depth);
}
