#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_inorder - Goes through the tree from left most to
 * rightmost branches, and runs func on the node's value.
 * @tree: Current node in the tree.
 * @func: Function pointer to the function to run on tree->n
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
