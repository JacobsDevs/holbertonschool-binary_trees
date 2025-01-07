#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - Counts the number of nodes in a binary tree
 * @tree: Pointer to the start of the binary tree.
 *
 * Return: the count of nodes on the tree or 0 for NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
		return (0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (nodes + 1);
}
