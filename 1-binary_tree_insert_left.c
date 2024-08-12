#include "binary_trees.h"
/**
 *binary_tree_insert_left - insert left child 
 * @parent: pointer of parent to left child
 * @value: value of node
 * Return: null if new is null or parent is; pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));
    /*malloc to create node*/

    if (new == NULL && parent == NULL)
    {
        free(new);
        return (NULL);
        /*if parent or new node is Null return Null*/
    }

    new->n = value;
    /*malloc is the value of node*/
    new->parent = parent;
    /* new node goes into parent*/
    new->left = parent->left;
    /* new node goes into left and = parent having a left child*/
    new->right = NULL;
    /*new nodes right child = null*/
    if (parent->left != NULL)
    {
        parent->left->parent = new;
        /*if left child is not null left childs parent is new node*/
    }    

    parent->left = new;
    /**left childs parent is new node */
    return (new);
    /*returns new node*/
}