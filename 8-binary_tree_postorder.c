#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_postorder - Goes through the tree from left most to
 * rightmost branches bottom to top, and runs func on the node's value.
 * @tree: Current node in the tree.
 * @func: Function pointer to the function to run on tree->n
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
