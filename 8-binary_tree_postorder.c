#include "binary_trees.h"
/**
 *binary_tree_postorder - traverse the tree from left to right
 * @tree: pointer to the root
 * @func: pointer to a void func call
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
{
		return;
}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
