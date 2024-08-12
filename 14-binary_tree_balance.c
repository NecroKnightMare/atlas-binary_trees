#include "binary_trees.h"
/**
 *binary_tree_balance - measures balance of a tree with three other func
 * @tree: pointer to root node
 * Return: diff of left height and right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_b;
	int right_b;

	if (tree == NULL)
{
		return (0);
}

	left_b = tree->left ? (int)binary_tree_balance(tree->left) : -1;
	right_b = tree->right ? (int)binary_tree_balance(tree->right) : -1;

	return (left_b > right_b ? left_b : right_b);
}
