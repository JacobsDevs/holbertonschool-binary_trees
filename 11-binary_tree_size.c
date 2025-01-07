#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the start of the binary tree.
 *
 * Return: the size of the tree or 0 for NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 1;

	if (tree == NULL)
		return (0);
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
