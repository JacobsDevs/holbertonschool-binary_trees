#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_uncle - gets the uncle of the node where one exists.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: uncle pointer or NULL if no grandparent or uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;
	if (grandparent->left == NULL || grandparent->right == NULL)
		return (NULL);
	if (grandparent->left->n == node->parent->n)
		return (grandparent->right);
	return (grandparent->left);
}
