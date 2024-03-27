#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Function to Get the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t l_height, r_height;

    if (tree == NULL)
        return 0;

    l_height = binary_tree_height(tree->left);
    r_height = binary_tree_height(tree->right);

    return (l_height > r_height ? l_height : r_height) + 1;
}

/**
 * binary_tree_count_nodes - Count the number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of nodes in the tree
 */
size_t binary_tree_count_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return 1 + binary_tree_count_nodes(tree->left) + binary_tree_count_nodes(tree->right);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, nodes, perfect_nodes;

    if (tree == NULL)
	
        return 0;

    height = binary_tree_height(tree);
    nodes = binary_tree_count_nodes(tree);
    perfect_nodes = (1 << height) - 1;

    return nodes == perfect_nodes;
}
