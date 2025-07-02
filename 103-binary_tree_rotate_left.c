#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left rotation program
 * @tree: pointer to root
 * Return: pointer to new root or Null
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (!tree)
	{
		return (NULL);
	}

	if (!tree->right)
	{
		return (NULL);
	}

	new = tree->right;
	tree->right = new->left;

	if (new->left)
	{
		new->left->parent = tree;
	}

	new->left = tree;
	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
