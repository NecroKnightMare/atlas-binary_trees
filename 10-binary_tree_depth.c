#include "binary_trees.h"
/**
 *binary_tree_depth -  
 * @tree:
 * Return:
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t deep = 0;

    if (tree == NULL)
    {
        return (0);
    }
    while (tree->parent != NULL)
    {
        deep++;
        tree = tree->parent;
    }
    return (deep)
}