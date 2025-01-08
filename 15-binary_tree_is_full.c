#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_is_full - Checks to see if a tree is full and each node
 * has 2 leaves or is a leaf.
 * @tree: Pointer to the beginning of the binary tree.
 *
 * Return: 1 if the tree is full or 0 if tree is NULL or not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0;
	int right_full = 0;

	if (tree == NULL)
		return (0);
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);
	if (left_full == right_full)
		return (1);
	return (0);


}
