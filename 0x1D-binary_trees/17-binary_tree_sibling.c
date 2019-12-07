#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: The pointer to the node that will be used as initial sibling.
 *
 * Return: A pointer to the sibling binary tree node
 *         NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent != NULL)
		{
			if (node->parent->left == node)
			{
				return (node->parent->right);
			}
			else
			{
				return (node->parent->left);
			}

		}
	}
		return (NULL);
}
