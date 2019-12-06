#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: The pointer of the tree that will be measured.
 *
 * Return: The number of nodes in the tree as a size_t value.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	else
	{
		return (0);
	}
}
