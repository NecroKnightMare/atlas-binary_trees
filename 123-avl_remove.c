#include "binary_trees.h"
#include <stdlib.h>

/**
 * min_value_node - Finds the in-order successor
 * @node: Pointer to root of the right subtree
 * Return: Pointer to minimum value node
 */
avl_t *min_value_node(avl_t *node)
{
	while (node && node->left)
		node = node->left;
	return (node);
}

/**
 * avl_remove - finds numerical successor 
 * @root: pointer to root 
 * @value: remove value
 * Return: pointer to new root after removal and balance
 */

avl_t *avl_remove(avl_t *root, int value)
{
	avl_t *successor, *temp;
	int balance;

	if (!root)
	{
		return (NULL);
	}

	if (value < root->n)
	{
		root->left = avl_remove(root->left, value);
	}
	else if (value > root->n)
	{
		root->right = avl_remove(root->right, value);
	} else {
		if (!root->left || !root->right)
		{
			temp = root->left ? root->left : root->right;

			if (!temp)
			{
				temp = root;
				root = NULL;
			} else {
				temp->parent = root->parent;
				*root = *temp;
			}
			free(temp);
		} else {
			successor = min_value_node(root->right);
			root->n = successor->n;
			root->right = avl_remove(root->right, successor->n);
		}
	}

	if (!root)
	{
		return (NULL);
	}
	balance = binary_tree_balance(root);

	if (balance > 1 && binary_tree_balance(root->left) >= 0)
	{
		return (binary_tree_rotate_right(root));
	}
	if (balance > 1 && binary_tree_balance(root->left) < 0)
	{
		root->left = binary_tree_rotate_left(root->left);
		return (binary_tree_rotate_right(root));
	}
	if (balance < -1 && binary_tree_balance(root->right) <= 0)
	{
		return (binary_tree_rotate_left(root));
	}
	if (balance < -1 && binary_tree_balance(root->right) > 0)
	{
		root->right = binary_tree_rotate_right(root->right);
		return (binary_tree_rotate_left(root));
	}

	return (root);
}
