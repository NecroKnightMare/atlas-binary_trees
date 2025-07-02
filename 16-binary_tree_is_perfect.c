#include "binary_trees.h"
/**
 * binary_tree_height - measueres height of binary tree recursively
 * @tree: pointer to root
 * Return: tree height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right = binary_tree_height(tree->right);
	}

	return (left > right ? left : right);
}

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root
 * Return: Number of nodes, 0 if Null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 *binary_tree_is_perfect - checks to see if all levels are filled
 * @tree: pointer to root of node
 * Return: size of tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected;

	if (!tree)
{
		return (0);
}

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected = (1 << (height + 1)) - 1;

	return (size == expected);
}
