#include "binary_trees.h"

/**
 * build_avl - build avl from sorted array
 * @array: pointer to array
 * @start: start index
 * @end: end index
 * @parent: pointer to parent node
 * Return: pointer to subtree root
 */
avl_t *build_avl(int *array, int start, int end, avl_t *parent)
{
	int mid;
	avl_t *node;

	if (start > end)
	{
		return (NULL);
	}

	mid = (start + end) / 2;
	node = binary_tree_node(parent, array[mid]);

	if (!node)
	{
		return (NULL);
	}

	node->left = build_avl(array, start, mid - 1, node);
	node->right = build_avl(array, mid + 1, end, node);

	return (node);
}

/**
 * sorted_array_to_avl - builds avl tree from sorted array
 * @array: pointer to array
 * @size: array size
 * Return: pointer to root
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (!array)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (build_avl(array, 0, (int)size - 1, NULL));
}
