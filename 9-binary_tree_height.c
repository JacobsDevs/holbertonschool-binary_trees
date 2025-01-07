#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - traverses the binary tree and returns its height from
 * the node tree.
 * @tree: Pointer to the node to count from.
 *
 * Return: The height of the tree or 0 on NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	left_height += binary_tree_height(tree->left);
	right_height += binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}
