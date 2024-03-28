#include "binary_trees.h"

/**
 * binary_tree_depth - Function to measures the
 * depth of a node in a binary tree.
 *@tree: pointer to the node to measure the depth.
 * Return: if tree is NULL return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
		return (1 + binary_tree_depth(tree->parent));
}
/**
 * binary_trees_ancestor - function to finds the
 * lowest common ancestor of two nodes
 * @first: first node of the tree
 * @second: second node of the tree
 * Return: lowest common ancestor of the tree.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t height_f = 0, height_s = 0;
	const binary_tree_t *ptr = NULL;

	height_f = binary_tree_depth(first);
	height_s = binary_tree_depth(second);
	if (height_f && height_s)
	{
		if (height_f > height_s)
		{
			ptr = first;
			first = second;
			second = ptr;
		}
		while (first)
		{
			ptr = second;
			while (ptr)
			{
				if (first == ptr)
				{
					return ((binary_tree_t *)first);
				}
				ptr = ptr->parent;
			}
			first = first->parent;
		}
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
