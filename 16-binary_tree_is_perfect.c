#include "binary_trees.h"

/**
 * nary_tree_depth - function that measures the height of a binary tree
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
}/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: 0 if tree null otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_depth(tree->left);
	right_height = binary_tree_depth(tree->right);

	if (left_height == right_height)
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}

