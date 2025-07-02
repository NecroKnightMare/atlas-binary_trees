#include "binary_trees.h"

/**
 *binary_tree_rotate_right - rotates tree right
 * @tree: pointer to root
 * Return: pointer to new root or Null(fail)
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (!tree)
	{
		return (NULL);
	}
	if (!tree->left)
	{
		return (NULL);
	}

	new = tree->left;
	tree->left = new->right;

	if (new->right)
	{
		new->right->parent = tree;
	}

	new->right = tree;
	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
