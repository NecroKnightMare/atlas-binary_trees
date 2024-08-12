#include "binary_trees.h"
/**
 *binary_tree_preorder - goes through tree from left to right
 * @tree: pointer to root of tree
 * @func: pointerto a void func call
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
{
		return;
}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
