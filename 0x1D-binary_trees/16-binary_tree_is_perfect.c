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
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: The pointer of the tree that will be measured.
 *
 * Return: The size of the tree as a size_t value.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a tree is a perfect binary tree
 *							(where number of nodes is equal to (2^height) - 1).
 *
 * @tree: The pointer of the tree that will be checked.
 *
 * Return: 1 if tree is a perfect binary tree otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, perfect, size;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);
	perfect = ((2 << height) - 1);
	size = binary_tree_size(tree);

	return (perfect == size ? 1 : 0);
}
