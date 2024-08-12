#include "binary_trees.h"
/**
 *binary_tree_inorder - checing tree from left to right
 * @tree: pointer to the root
 * @func: pointer to a void func call
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
{
		return;
}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
