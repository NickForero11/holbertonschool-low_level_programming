#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: The pointer of the tree that will be measured.
 *
 * Return: The height of the tree as a size_t value.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height >= right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: The pointer of the tree that will be measured.
 *
 * Return: The balance factor of the tree as an integer value.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree == NULL)
	{
		return (0);
	}

	left_balance = -1;
	right_balance = -1;

	if (tree->left != NULL)
	{
		left_balance = binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_balance = binary_tree_height(tree->right);
	}

	return (left_balance - right_balance);
}
