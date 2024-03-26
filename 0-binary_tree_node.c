#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree.
 *@parent: pointer to the parent node of the new node to create.
 *@value: value to put in the new node.
 * Return: return a pointer to the new node or NULL if no.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
