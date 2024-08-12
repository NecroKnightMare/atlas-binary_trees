#include "binary_trees.h"
/**
 *binary_tree_is_perfect -
 * @tree:
 * Return:
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, size;

    if (tree == NULL)
    {
        return (0);
    }

    height = binary_tree_height(tree);
    size = binary_tree_size(tree);

    return (size == (1 << (height + 1)) - 1 );
}