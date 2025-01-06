#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Return a new binary_tree_node pointer
 * @parent: Pointer to the parent. Leave NULL for head of tree.
 * @value: The value of the binary_tree.
 *
 * Return: Pointer to the new binary_tree or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent)
		node->parent = parent;
	else
		node->parent = NULL;
	return (node);
}
