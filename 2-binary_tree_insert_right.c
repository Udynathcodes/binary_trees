#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a right-child, new node
 *				must take its place, and the old right-child must
 *				be set as the right-child of the new node.
 *
 * Return: a pointer to the created node, if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = parent->right;
	parent->right = newnode;
	if (newnode->right)
		newnode->right->parent = newnode;
	return (newnode);
}
