#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the heeight.
 *
 * Return: return 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t height_left, height_right;

		if (tree->left != NULL)
		{
			height_left = 1 + binary_tree_height(tree->left);
		}
		else
		{
			height_left = 0;
		}
		if (tree->right != NULL)
		{
			height_right = 1 + binary_tree_height(tree->right);
		}
		else
		{
			height_right = 0;
		}
		return ((height_left > height_right ? height_left : height_right));
	}
	return (0);
}
