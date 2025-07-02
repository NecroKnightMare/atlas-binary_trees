#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst_helper - checks if binary tree recursively
 * @tree: pointer to root
 * @min: minimum value
 * @max: maximum value
 * Return: 1 if binary tree, or 0
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
	{
		return (1);
	}

	if (tree->n <= min)
	{
		return (0);
	}

	if (tree->n >= max)
	{
		return (0);
	}

	return (is_bst_helper(tree->left, min, tree->n) &&
	is_bst_helper(tree->right, tree->n, max));
}
/**
 * binary_tree_is_bst - 
 * @tree: pointer to root
 * Return: 
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
