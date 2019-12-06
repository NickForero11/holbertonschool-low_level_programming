#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 *                         using post-order traversal.
 *
 * @tree: The pointer of the tree that will be traversed.
 *
 * @func: The pointer to a function that will be used in every node
 *        (to do something with n or its childrens/parent).
 *
 * Return: always nothing (void).
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	}
}
