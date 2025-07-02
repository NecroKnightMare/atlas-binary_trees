#include "binary_trees.h"
/**
 * tree_height - measueres height of binary tree recursively
 * @tree: pointer to root
 * Return: tree height or 0 if NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
	{
		return (0);
	}

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 *binary_tree_balance - measures balance of a tree with three other func
 * @tree: pointer to root node
 * Return: diff of left height and right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
{
		return (0);
}

	left_height = tree->left ? (int)tree_height(tree->left) : 0;
	right_height = tree->right ? (int)tree_height(tree->right) : 0;

	return (left_height - right_height);
}
