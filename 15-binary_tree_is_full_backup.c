#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_is_full - Checks to see if a tree is full and each node
 * has 2 leaves or is a leaf.
 * @tree: Pointer to the beginning of the binary tree.
 *
 * Return: 1 if the tree is full or 0 if tree is NULL or not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int leaves = 0;
	int full_num = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	leaves = binary_tree_leaves(tree);
	if (left_height != right_height)
		return (0);
	full_num = power(2, left_height);
	if (full_num == leaves)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - traverses the binary tree and returns its height from
 * the node tree.
 * @tree: Pointer to the node to count from.
 *
 * Return: The height of the tree or 0 on NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	left_height += binary_tree_height(tree->left);
	right_height += binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the start of the binary tree.
 *
 * Return: the count of leaves on the tree or 0 for NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (leaves);
}

/**
 * power - returns the x^y
 * @x: Primary.
 * @y: Exponent
 *
 * Return: Result
 */
int power(int x, int y)
{
	int count = 0;
	int sum = x;

	while (count < y - 1)
	{
		sum = sum * x;
		count++;
	}
	return (sum);
}
