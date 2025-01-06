#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Returns whether a node is a leaf or not.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if a leaf 0 if not or doesn't exist.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
