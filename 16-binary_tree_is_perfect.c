#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function to Checks if
 * a binary tree is perfect.
 *
 * @tree: pointer to the root node of the binary tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	return (size == (1 << height) - 1);
}

/**
 * binary_tree_size - Calculates the size (number of nodes)
 * of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The size of the binary tree, or 0 if the tree
 * is empty (NULL).
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
	{
		return (0);
	}
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * If @tree is NULL, the height is considered 0. If @tree has
 * no right subtree,
 * the height is considered 0 as well.
 *
 * Return: height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t l_height = binary_tree_height(tree->left);
	size_t r_height = binary_tree_height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
}
