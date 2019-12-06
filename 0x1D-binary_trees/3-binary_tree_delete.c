#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @tree: The root node of the tree that will be deleted.
 *
 * Return: Always nothing (void).
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL;
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		tree = NULL;
		return;
	}
}
