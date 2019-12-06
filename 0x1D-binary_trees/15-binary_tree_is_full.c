#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a tree is full binary tree
 *                       (Every node has 2 or 0 childrens).
 *
 * @tree: The pointer of the tree that will be checked.
 *
 * Return: 1 if tree is a full binary tree otherwise 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	if (tree->right != NULL && tree->left != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		return (left_full && right_full);
	}

	return (0);
}
