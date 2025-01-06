#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/**
 * struct binary_tree - Struct for binary_tree_node
 * @n: The value stored in the binary_tree.
 * @parent: The parent of this node.
 * @left: The left child of this node.
 * @right: The right child of this node.
 *
 * Description: Struct for the binary_tree_node that stores a value
 * and two children.
 */
typedef struct binary_tree
{
	int n;
	struct binary_tree *parent;
	struct binary_tree *left;
	struct binary_tree *right;

} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
#endif
