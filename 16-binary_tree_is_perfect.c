#include "binary_trees.h"
/**
 *binary_tree_is_perfect - checks to see if all levels are filled
 * @tree: pointer to root of node
 * Return: size of tree
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

	return (size == (size_t)(1 << (height + 1)) - 1 );
}
