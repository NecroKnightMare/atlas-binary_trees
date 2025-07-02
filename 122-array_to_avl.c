#include "binary_trees.h"

/**
 * array_to_avl - builds AVL tree from array
 * @arrya: pointer to first element in arry
 * Return: Pointer to root of built tree or NULL
 */

avl_t *array_to_avl(int *array, size_t size)
{
	size_t i;
	avl_t *root = NULL;

	if (!array)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; ++i)
	{
		avl_insert(&root, array[i]);
	}
	return (root);
}