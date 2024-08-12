#include "binary_trees.h"
/**
 *binary_tree_balance -  
 * @tree:
 * Return:
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_h;
    int right_h;

    if (tree == NULL)
    {
        return (0);
    }

    left_h = (int)binary_tree_height(tree->left);
    right_h = (int)binary_tree_height(tree->right);

    return (left_h - right_h);     
}