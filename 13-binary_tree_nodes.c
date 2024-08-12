#include "binary_trees.h"
/**
 *binary_tree_nodes - counts nodes with at least 1 child in b tree
 * @tree: pointer to root node
 * Return: if null 0, return count of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
{
		return (0);
}

	count = 0;

	if (tree->left != NULL || tree->right != NULL)
{
	count = 1;
}
	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
