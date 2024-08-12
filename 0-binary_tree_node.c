#include "binary_trees.h"
/**
 *binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node of node created
 * @value:value inserted in node
 * Return:pointer to new node or null if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

/**	if (parent == NULL)
{
		return (NULL);
}**/

	new = malloc(sizeof(binary_tree_t));
	/**new node created to size of typedef struct */

	if (new == NULL)
{
		return (NULL);
		/**if null return null */
}

	new->parent = parent;
	/**then will equal to parent pointer */
	new->left = NULL;
	/**will indicate that there is no left child */
	new->right = NULL;
	/**indicates there is no right child */
	new->n = value;
	/**new node will become int n */	
	return (new);
	/**returns pointer to parent node */      
}
