#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

typedef struct binary_tree {
        int n;
        struct binary_tree *parent;
        struct binary_tree *left;
        struct binary_tree *right;

} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
#endif
