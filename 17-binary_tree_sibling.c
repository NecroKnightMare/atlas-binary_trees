#include "binary_trees.h"
/**
 *binary_tree_sibling -  
 * @node: pointer to node of child
 * Return:
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->left == node)
    {
        return (node->parent->right);
    }
    
    else if (node->parent->right == node)
    {
        return (node->parent->left);
    }
        return (NULL);
}