#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the start of the binary tree.
 *
 * Return: the count of leaves on the tree or 0 for NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (leaves);
}
