#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the heeight.
 *
 * Return: return 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t depth = 0;

		if (tree->parent != NULL)
		{
			depth = 1 + binary_tree_depth(tree->parent);
		}
		else
		{
			depth = 0;
		}
		return (depth);
	}
	return (0);
}
