#include "binary_trees.h"

/**
 * avl_insert - insert value in AVL tree and balances it
 * @tree: double pointer to root
 * @value: value to insertion
 * Return: pointer to inserted node, or NULL(fail)
 */

avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *node;
	int balance;

	if (!tree)
	{
		return (NULL);
	}

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left)
		{
			node = avl_insert(&(*tree)->left, value);
		} else {
			(*tree)->left = binary_tree_node(*tree, value);
			node = (*tree)->left;
		}
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right)
		{
			node = avl_insert(&(*tree)->right, value);
		} else {
			(*tree)->right = binary_tree_node(*tree, value);
			node = (*tree)->right;
		}
	}
	else
	{
		return (NULL);
	}
	
	balance = binary_tree_balance(*tree);

	if (balance > 1 && value < (*tree)->left->n)
	{
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (balance < -1 && value > (*tree)->right->n)
	{
		*tree = binary_tree_rotate_left(*tree);
	}
	else if (balance > 1 && value > (*tree)->left->n)
	{
		(*tree)->left = binary_tree_rotate_left((*tree)->left);
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (balance < -1 && value < (*tree)->right->n)
	{
		(*tree)->right = binary_tree_rotate_right((*tree)->right);
	}
	return (node);
}
