#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *node = malloc(sizeof(binary_tree_t));
        node->n = value;
        node->left = NULL;
        node->right = NULL;

        if (node == NULL)
                return (NULL);
        if (parent)
                node->parent = parent;
        return (node);
}
