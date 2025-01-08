#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_sibling - gets the sibling of the node where one exists.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Sibling pointer or NULL if no parent or sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == NULL || parent->right == NULL)
		return (NULL);
	if (parent->left->n == node->n)
		return (parent->right);
	return (parent->left);
}
