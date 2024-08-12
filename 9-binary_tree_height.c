#include "binary_trees.h"
/**
 *binary_tree_height - 
 * @tree:
 * Return:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_h, right_h;

    if (tree == NULL)
    {
        return (0);
    }
    left_h = binary_tree_height(tree->left);
    right_h = binary_tree_height(tree->right);

    return (left_h > right_h ? left_h : right_h) + 1;
}
