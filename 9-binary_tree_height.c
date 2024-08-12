#include "binary_trees.h"
/**
 *binary_tree_height - 
 * @tree:
 * Return:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    size_t left_h = binary_tree_height(tree->left);
    size_t right_h = binary_tree_height(tree->right);

    return (left_h > right_h ? left_h : right_h + 1);
}