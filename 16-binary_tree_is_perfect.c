#include <stddef.h>
#include "binary_trees.h"

int binary_tree_height(const binary_tree_t *tree);

/* Function to check if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Function to calculate the height of a binary tree */
int binary_tree_height(const binary_tree_t *tree) {
    int left_height, right_height;

    if (tree == NULL)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return 1 + (left_height > right_height ? left_height : right_height);
}

int binary_tree_is_perfect(const binary_tree_t *tree) {
    int height_left, height_right;

    if (tree == NULL)
        return 0;

    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    if (height_left == height_right)
        return 1;
    else
        return 0;
}
