#include "binary_trees.h"
/**
 *binary_tree_is_full - check to see if tree is full with other func
 * @tree: pointer to root node
 * Return: 0 if null; 1 if both sides arent full;leaves if not null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
{
		return (0);
}

	if(tree->left == NULL && tree->right == NULL)
{
		return(1);
}

	if (tree->left != NULL && tree->right != NULL)
{
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
	return (0);
}
