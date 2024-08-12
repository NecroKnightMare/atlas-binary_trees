#include "binary_trees.h"
/**
 *binary_tree_balance - measures balance of a tree with three other func
 * @tree: pointer to root node
 * Return: diff of left height and right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h;
	int right_h;

	if (tree == NULL)
{
		return (0);
}

	left_h = tree->left ? (int)binary_tree_height(tree->left) : 0;
	right_h = tree->right ? (int)binary_tree_height(tree->right) : 0;

	return (left_h - right_h);     
}
