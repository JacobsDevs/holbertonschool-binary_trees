#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_preorder - Goes through the tree down the left branch first,
 * right branch second, and runs func on the node's value.
 * @tree: Current node in the tree.
 * @func: Function pointer to the function to run on tree->n
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
