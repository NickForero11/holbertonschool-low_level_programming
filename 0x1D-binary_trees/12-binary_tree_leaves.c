#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: The pointer of the tree that will be measured.
 *
 * Return: The number of leaf's of the tree as a size_t value.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
