#include "binary_trees.h"
/**
 *binary_tree_insert_right - insert new node at right child
 * @parent: new node will be at parent
 * @value: value of right child
 * Return Null if parent and right are null; points to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
{
		return (NULL);
		/*if parent or new node is Null return Null*/
}

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
{
		return (NULL);
}
	new->n = value;
	/*malloc is the value of node*/
	new->parent = parent;
	/* new node goes into parent*/
	new->right = parent->right;
	/* new node goes into right and = parent having a right child*/
	new->left = NULL;
	/*new nodes right child = null*/
	if (parent->right != NULL)
{
		parent->right->parent = new;
		/*if right child is not null right childs parent is new node*/
}

	parent->right = new;
	/**right childs parent is new node */
	return (new);
	/*returns new node*/
}
