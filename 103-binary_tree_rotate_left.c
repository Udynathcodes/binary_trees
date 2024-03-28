#include "binary_trees.h"

/**
 * binary_tree_rotate_left - carryout left-rotation on a binary tree
 * @tree: pointer to binary tree
 * Return: pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *ptr, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		var = tree->right->left;
		ptr = tree->right;
		ptr->parent = tree->parent;
		ptr->left = tree;
		tree->parent = ptr;
		tree->right = var;
		if (var)
			var->parent = tree;
		return (ptr);
	}
	return (NULL);
}
