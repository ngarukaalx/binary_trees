#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leafs or 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_leaf = 0;

	size_t left_leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	right_leaf = binary_tree_leaves(tree->right);
	left_leaf = binary_tree_leaves(tree->left);
	return (right_leaf + left_leaf);

}
