#include "binary_trees.h"
/**
 *binary_tree_depth -  
 * @tree:
 * Return:
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t deep;

    if (tree == NULL)
    {
        return (0);
    }
    for (deep = 0; tree->parent != NULL; deep++)
    {
        tree = tree->parent;
    }
    return (deep);
}