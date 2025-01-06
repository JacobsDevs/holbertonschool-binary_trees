#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_root - Returns if a node is the root or not.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if root, 0 if not root on NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
