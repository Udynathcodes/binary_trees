#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the binary tree.
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
	size_t left_size, right_size;

	if (tree == NULL)
	{
		return (0);
	}
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * If @tree is NULL, the height is considered 0. If @tree has
 * no right subtree,
 * the height is considered 0 as well.
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
