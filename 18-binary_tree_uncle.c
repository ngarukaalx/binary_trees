#include "binary_trees.h"


/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: poiter to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}
	if (parent->right == node)
	{
		return (parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node:pointer to the node to find the uncle
 *
 * Return:pointer to the uncle node otherwise null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;

	if (parent->left == node || parent->right == node)
	{
		return (binary_tree_sibling(parent));
	}
	return (NULL);
}
