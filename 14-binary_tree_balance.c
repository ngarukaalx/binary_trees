#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is null otherwise returns the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			height_left = 1 + binary_tree_balance(tree->left);
		}
		else
		{
			height_left = 0;
		}
		if (tree->right != NULL)
		{
			height_right = 1 + binary_tree_balance(tree->right);
		}
		else
		{
			height_right = 0;
		}
	}
	return (height_left - height_right);
}
