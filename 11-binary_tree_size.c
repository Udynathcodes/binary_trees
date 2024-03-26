#include "binary_trees.h"

/**
 * binary_tree_size - Function that Calculates the size of a binary tree.
 *
 * @tree: pointer to the root node of a binary tree.
 *
 * Return: 0 if empty or the size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int l_size, r_size;

	if (tree == NULL)
	{
		return (0);
	}
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
