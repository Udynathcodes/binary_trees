#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at
 * least one child in a binary tree.
 *
 * @tree: pointer to root node of the binary tree.
 *
 * Return: number of nodes with at least one child,
 * or 0 if tree is empty.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);

		return (left + right + 1);
	}
	return (0);
}
