#include "binary_trees.h"

/**
 * binary_tree_rotate_right - carryout rigth-rotation on a binary tree
 * @tree: pointer to binary tree
 * Return: pointer to the new root node of the tree.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *ptr, *var;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		var = tree->left->right;
		ptr = tree->left;
		ptr->parent = tree->parent;
		ptr->right = tree;
		tree->parent = ptr;
		tree->left = var;
		if (var)
			var->parent = tree;
		return (ptr);
	}
	return (NULL);
}
