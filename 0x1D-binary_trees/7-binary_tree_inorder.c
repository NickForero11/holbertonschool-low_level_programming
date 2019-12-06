
#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree
 *						 using in-order traversal.
 *
 * @tree: The pointer of the tree that will be traversed.
 *
 * @func: The pointer to a function that will be used in every node
 *        (to do something with n or its childrens/parent).
 *
 * Return: always nothing (void).
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
	}
}
