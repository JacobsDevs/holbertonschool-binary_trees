#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - Inserts a new node on the left branch of parent
 * and reparents any existing left nodes to new node
 * @parent: Pointer to the parent node.
 * @value: int value of the new node.
 *
 * Return: Pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (new == NULL || parent == NULL)
		return (NULL);
	else
		new = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
