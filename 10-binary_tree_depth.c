#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - traverses the binary tree and returns the depth of a
 * node in the tree.
 * @tree: Pointer to the node to count from.
 *
 * Return: The depth of the tree or 0 on NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	depth++;
	return (depth);
}
