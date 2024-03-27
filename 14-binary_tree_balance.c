#include "binary_trees.h"

/**
 * binary_tree_balance - Function to Measures the balance factor of a binary tree.
 *
 * @tree: pointer to the root node of the binary tree.
 *
 * Return: 0 if empty or balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * max - Function to Finds the maximum integers.
 * @a: first integer.
 * @b: second integer.
 * Return: larger int
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * If @tree is NULL, the height is considered 0. If @tree has
 * no right subtree.
 *
 * Return: height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, height;

	if (tree)
	{

		if (tree->left != NULL)
		{
			l_height = binary_tree_height(tree->left);
		}

		if (tree->right != NULL)
		{
			r_height = binary_tree_height(tree->right);
		}

		height = max(l_height, r_height);
		return (1 + height);
	}
	return (0);
}

